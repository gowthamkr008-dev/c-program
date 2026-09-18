

//seprate by char
void is_allseprate(char *token){
    int i = 0;
    static int valid;
    while(token[i] != '\0'){ 
        if(valid == 1){
        if(strstr(token,"*/") ){
            valid = 0;
        while(token[i] != '\0'){
            if(token[i]== '*' && token[i+1] == '/'){
                break;
            }
          i++;
         }
        }else {
            return ;
        } 
    }// comment discarded

    //find preprocessor
    if(token[i] == '#'){
        char subtoken[strlen(token)];
        int j = 0;
        while(token[i] != '>' || token[i] == '"' || token[i] == '\n'){
            subtoken[j++] = token[i++];
        }
        subtoken[j++] = token[i--];
        i++;
        subtoken[j] = '\0';
        isfind(subtoken);
        //find keyword or variable  
    }else if(  (token[i] == 0) &&  (token[i+1]=='x' || token[i+1] == 'X' )){
            char subtoken[strlen(token)+1];
            int j = 0;
            while(isxdigit(token[i]) || token[i] == 'x' || token[i] == 'X' ){
                subtoken[j] = token[i];
                i++;
                j++;
            }
            i--; 
            subtoken[j] = '\0';
            if(isalpha(token[i])){
                // printf("%20sError\n","");
                error++;
                return;
            }else{
                // printf("Call function\n");
                isfind(subtoken);
            } 
        }else if(isalpha(token[i]) || token[i] == '_'){
            int j = 0;
            char subtoken[strlen(token)+1];
            while(isalpha(token[i]) || token[i]== '_'){
                subtoken[j++] = token[i++];
            }
            i--;
            subtoken[j] = '\0';
           // printf("find by alpha     ");;
            isfind(subtoken);
        }//find string literal
        else if (token[i] == '"' || token[i] == '\''){
            int j=0;
            char subtoken[strlen(token)+1];
           
            if(token[i] == '"'){
            subtoken[j++] = token[i++];
            while(token[i] != '"')
                subtoken[j++] = token[i++];

                 subtoken[j++] = '"';
                  subtoken[j] = '\0';
                     isfind(subtoken);
            }else if (token[i] == '\''){
            subtoken[j++] = token[i++];
            while(token[i] != '\'')
                subtoken[j++] = token[i++];

                 subtoken[j++] = '\'';
                  subtoken[j] = '\0';
                 printf("%-40sLITERAL\n",subtoken);
            }
           
         
        }//find character literal
        else if(token[i] == '\'' && token[i+2] == '\''){
            printf("%c%c%-40cLITERAL\n",token[i],token[i+1],token[i+2]);
        }//find hexadigit
        else if(( (token[i] == '+' || token[i] == '-') && isdigit(token[i+1]) )){
            int j = 0;
            char subtoken[strlen(token)];
            while(token[i] != '\0'){
                if( token[i] == '.' ||  ((token[i] == '+' || token[i] == '-' )  && isdigit(token[i+1]))  || (isdigit(token[i]) )){
                    subtoken[j] = token[i];
                }else{
                    break;
                }
                j++;
                i++;
            }
                subtoken[j] = '\0';
                i--;
            isfind(subtoken);
        }
        //find operator
        else if()
        {
            char subtoken[strlen(token)];
            int j=0;
            while(token[i] != '\0'){
                if(token[i] == '+' || token[i] == '-' || token[i] == '*'  || token[i] == '/'  || token[i] == '='  || token[i] == '!'  || token[i] == '<'  || token[i] == '>' || token[i] =='|' ||token[i] == '&' || token[i] == '^'|| token[i] == '~' || token[i] == '?' || token[i] == '%')
                {
                    if(token[i] == '/' && token[i+1] == '/'){
                        //printf("Comment found return\n");
                        return;
                    }else if(token[i] == '/' && token[i+1] == '*'){
                        valid = 1;
                       // printf("Comment found return\n");
                        return;                        
                    } else if(token[i] == '*' && token[i+1] == '/'){
                       
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

        }//find special characters
        else if
       //is hexa number
        
             

        i++;
    }//
}
