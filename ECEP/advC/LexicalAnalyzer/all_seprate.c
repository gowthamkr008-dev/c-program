#include "lexer.h"


extern int sc_count;
extern int error ;
extern int valid;



void  is_allseprate(char * token){
    int i = 0;
    while( token[i] != '\0'){
        if(valid ==1){
            if(strstr(token, "*/")){
                valid = 0;
                while(token[i] != '\0'){
                    if(token[i] == '*'&& token[i+1] == '/'){
                        i+=2;
                        if(token[i] == '\n' || token[i] == '\0'){
                            return;
                        }
                        break;
                    }
                    i++;
                }
            }else{
                return;
            }
        }//find multiline comment
       
        //find pre processor
        if(token[i] == '#'){
            char subtoken[strlen(token)];
            int j = 0;
            while(token[i] != '>' || token[i] == '\n'){
                subtoken[j++] = token[i++];
            }
            subtoken[j++] = token[i--];
            i++;
            subtoken[j] = '\0';
            isfind(subtoken);
        }//find preprocessor derivatives
        
        else if( ((token[i] == '0') && (token[i+1] == 'x' || token[i+1] == 'X') && isxdigit((unsigned char)token[i+2])) ) {
            int j = 0;
            char subtoken[strlen(token)+1];
            subtoken[j++] = token[i++];
            subtoken[j++] = token[i++];
            while(token[i] != '\0'){
                if(isxdigit(token[i]) || isalnum(token[i])){
                    subtoken[j++] = token[i++];
                }else{
                    break;
                }
            }
            i--;
            subtoken[j] = '\0';
            isfind(subtoken);
        }//find hexa decimal
        
        else if( ((token[i] == '0') && (token[i+1] == 'b' || token[i+1] == 'B') ) ) 
        {
            int j = 0;
            char subtoken[strlen(token)+1];
            subtoken[j++] = token[i++];
            subtoken[j++] = token[i++];
            while(token[i] != '\0'){
                if(token[i] == '1' || token[i] == '0' || isalnum(token[i])){
                    subtoken[j++] = token[i++];
                }else{
                    break;
                }
            }
            i--;
            if(isdigit(token[i]) || isalpha(token[i])){
                if(token[i] != '1' && token[j] !='0'){
                    error++;
                    printf("\n%5sError '%s'\n"," ",token);
                }
            }
            subtoken[j] = '\0';
            isfind(subtoken);
        }//find binary
        
        else if(token[i] == 0){
            int j=0;
            char subtoken[strlen(token)];
            while(token[i] != '\0'){
                if(isdigit(token[i])){
                    subtoken[j++]=token[i++];
                }else{
                    break;
                }
            }
            if(isalpha(token[i-1])){
                error++;
                printf("\n%5sError %s\n"," ",token);
            }
        }//find octal
        
        else if( isdigit(token[i]) ||  ((token[i] == '+' || token[i] == '-') && (isdigit(token[i+1])) ) ) 
        {
            int j=0,dot =0;
            char subtoken[strlen(token)+1];
            while (( isdigit(token[i]) ||  ((token[i] == '+' || token[i] == '-')    && (isdigit(token[i+1]))) || token[i] == '.'    ) || isalnum(token[i])){
                if(token[i] == '.'){
                    dot++;
                }
                if(dot <= 1){
                    subtoken[j++] = token[i++];
                }else{
                    subtoken[j] ='\0';
                    printf("\n%6s%s Too many decimal points in number\n\n","",token);
                    error++;
                    return;
                }
            }//find number
             i--;
             subtoken[j] ='\0';
             if((isalpha(token[i+1]) && isdigit(token[i+2])) ){
                printf("\n%5sError '%s'\n"," ",token);
                error++;
                return;
            }
            subtoken[j] ='\0';
            isfind(subtoken);
        }//find figit
        
        else if(token[i] == '"'  || token[i] == '\''){
            int j=0;
            char subtoken[strlen(token)];
            if(token[i] == '"'){
                subtoken[j++] = token[i++];
                while(token[i] != '"'){
                    subtoken[j++] = token[i++];
                }
                subtoken[j++] =token[i];
                subtoken[j] = '\0';
                isfind(subtoken);
            }
            else if(token[i] == '\''){
                subtoken[j++] = token[i++];
                while(token[i] != '\''){
                    subtoken[j++] = token[i++];
                }
                subtoken[j++] =token[i];
                subtoken[j] = '\0';
                isfind(subtoken);
            }
        }//literal
        
        else if(isalpha(token[i])  || token[i] == '_'){
            int j=0;
            char subtoken[strlen(token)+1];
            while( ( isalpha(token[i]) )|| (token[i] == '_') ){
                subtoken[j++]=token[i++];
            }
            subtoken[j] = '\0';
            i--;
            isfind(subtoken);
        }//is identifier
        
        else if(token[i] == '+' || token[i] == '-' || token[i] == '*'  || token[i] == '/'  || token[i] == '='  || token[i] == '!'  || token[i] == '<'  || token[i] == '>' || token[i] =='|' ||token[i] == '&' || token[i] == '^'|| token[i] == '~' || token[i] == '?' || token[i] == '%')
        {
            int j=0;
            char subtoken[strlen(token)];
            while(token[i] != '\0'){
                if(token[i] == '+' || token[i] == '-' || token[i] == '*'  || token[i] == '/'  || token[i] == '='  || token[i] == '!'  || token[i] == '<'  || token[i] == '>' || token[i] =='|' ||token[i] == '&' || token[i] == '^'|| token[i] == '~' || token[i] == '?' || token[i] == '%')
                {
                    if(token[i] == '/' && token[i+1] == '/'){
                        return;
                    }else if(token[i] == '/' && token[i+1] == '*'){
                        valid = 1;
                        return;
                    }
                    subtoken[j++] = token[i++];
                }else{
                    break;
                }
            }
            subtoken[j] = '\0';
            i--;
            isfind(subtoken);
        }//find operator
        
        else if((token[i]== '(' || token[i] == '['|| token[i] == '{'||token[i]== ')' || token[i] == '}'|| token[i] == ']'||token[i] == ','||token[i] == ';'||token[i] == ':' ))
        {
            char subtoken[5];
            int j=0;
            int missing=0;
            if(token[i]== '(' || token[i] == '['|| token[i] == '{'){
                if(token[i] == '('){
                    int k =i,valid =0;
                    while(token[k] != '\0'){
                        if(token[k] == ')'){
                            valid =1;
                            break;
                        }else{
                            valid = 0;
                        }
                        k++;
                    }
                    if(valid == 0){
                        error++;
                        missing =1;
                    }
                }
                if(token[i] == '[')
                {
                    int k =i,valid =0;
                    while(token[k] != '\0'){
                        if(token[k] == ']'){
                            valid = 1;
                            break;
                        }else{
                            valid = 0;
                        }
                        k++;
                    }
                    if(valid == 0){
                        error++;
                        missing =2;
                    }
                }
                sc_count++;
                subtoken[j++]= token[i];
                subtoken[j] = '\0';
                isfind(subtoken);
                if(missing == 1){
                printf("%5s %s\n" , " " , "error: expected before ')' token \n");
            }
            else if(missing ==2)
            {
                printf("%5s %s\n" , " " , "error: expected before ']' token \n");
            }
        }else if(token[i]== ')' || token[i] == '}'|| token[i] == ']'){
            sc_count--;
            subtoken[j++]= token[i];
            subtoken[j] = '\0';
            isfind(subtoken);
        }else{
            subtoken[j++] = token[i];
            subtoken[j] = '\0';
            isfind(subtoken);
            }
        }
        i++;
    }//find special characters
}
