    #include <stdio.h>
    #include <string.h>
    #include<ctype.h>
    #include <stdio_ext.h>
    
    char *my_strtok(char str[], const char delim[]);
    
    int main()
    {
        char str[50], delim[50];
        printf("Enter the string  : ");
        scanf("%s", str);
        __fpurge(stdout);
        printf("Enter the delimeter : ");
        scanf("\n%s", delim);
        __fpurge(stdout);
       char *token = my_strtok(str, delim);
             printf("Tokens :\n"); 
      int i=0;
        while (token){  
            printf("%s\n", token);
            token = my_strtok(NULL, delim);
        } 
    
    }
    
    char *my_strtok(char *str, const char *delim){
     static int i,j ;
    static char *ptr;
     if(str != NULL){
      ptr = str;
     }
     int start = i;
      while(ptr[i] != '\0'){
          j=0;
          while(delim[j]!='\0'){
            if(ptr[i] == delim[j]){
              ptr[i] = '\0';
              i++;
             return ptr + start;
              
            }
            j++;
          }
          i++;
      }
      if(ptr[start] == '\0'){
        return NULL;
      }else
      return ptr+start;
      
    }
    