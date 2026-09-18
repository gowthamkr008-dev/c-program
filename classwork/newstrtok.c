#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdio_ext.h>

char *my_strtok(char str[], const char delim[]);

int main()
{
    char str[100], delim[50];
    printf("Enter the string: ");
    scanf("%99[^\n]", str);
    __fpurge(stdin);
    
    printf("Enter the delimiters: ");
    scanf("%49[^\n]", delim);
    __fpurge(stdin);
    
    char *token = my_strtok(str, delim);
    printf("Tokens:\n");
    
    while (token){  
        printf("%s\n", token);
        token = my_strtok(NULL, delim);
    } 
    
    return 0;
}

char * my_strtok(char *str, const char *delim){
    static int i;
    static char *ptr;  
    // Initialize if str is not NULL
    if(str != NULL){
        ptr = str;
    }
    // Skip leading delimiters and spaces
    while(ptr[i] != '\0'){
        int is_delim = 0; 
        for(int j = 0; delim[j] != '\0'; j++){
            if(ptr[i] == delim[j]){
                is_delim = 1;
                break;
            }
        }
        if(!is_delim){
            break;  // Found start of token
        }
        i++;
    }

    // If we reached end of string, return NULL
    if(ptr[i] == '\0'){
        return NULL;
    }
    int start = i;
    // Find end of token (look for delimiter)
    while(ptr[i] != '\0'){
        int is_delim = 0;
        for(int j = 0; delim[j] != '\0'; j++){
            if(ptr[i] == delim[j]){
                is_delim = 1;
                break;
            }
        }
        if(is_delim){
            ptr[i] = '\0';  // Mark end of token
            i++;
            break;
        }
        i++;
    }
    return ptr + start;
}