#include <stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>
#include<ctype.h>



void sort_names(char (* name)[20], int n);
void my_strcpy(char *dest,char *src);
int my_strcmp(char *str1,char *str2);

int main()
{
    int n,ch;
    printf("Enter the size: ");
    scanf("%d",&n);
  while ( (ch = getchar())!= '\n' && (ch != EOF) );
    
    char (*name)[20];
    name = malloc(n * sizeof(char[20]));
    if(name == NULL){
        perror("Error ");
        return 1;
    }
    
    int i;
    printf("Enter the %d names of Length max 20 character in each\n ",n);
    for( i =0;i <n;i++){
        printf("[%d] -> ",i+1);
        scanf("%19[^\n]",name[i]);
        while ( (ch = getchar()) != '\n' && (ch != EOF) );
    }
    
    
    sort_names( name, n);
}

void my_strcpy(char *dest,char *src){
    int i = 0;
    while(src[i] != '\0'){
        dest[i] = src[i];
        i++;
    }
    dest[i]= '\0';
}
int my_strcmp(char *s1,char *s2){
    char str1[20],str2[20];
    int i;
    for(i =0; s1[i] != '\0'; i++){
        str1[i] = tolower(s1[i]);
    }
    for(i =0; s2[i] != '\0'; i++){
        str2[i] = tolower(s2[i]);
    }
    i= 0;
  while(str1[i] != '\0' || str2[i] != '\0'){
    if((str1[i] - str2[i]) != 0){
      return str1[i] - str2[i];
    }
    i++;
  }
  if(str1[i] == '\0' && str2[i] == '\0'){
    return 0;
  }
  if(str1[i] == '\0'){
    return 1;
  }else if(str2[i] == '\0'){
    return -1;
  }
}



void sort_names(char (* name)[20], int n){
    int i,j;
    for(j =0;j < n-1;j++){
     for(i = 0;i < n-1-j ;i++){
        if(my_strcmp(name[i],name[i+1]) > 0){
            char temp[20];
            my_strcpy(temp, name[i]);
            my_strcpy(name[i], name[i+1]);
            my_strcpy(name[i+1], temp);
        }
    }
    }
    
    printf("Sorted names are: \n");
    for(i =0;i<n;i++)
        printf("%s ",name[i]);
 
}


// #include <stdio.h>
// #include<stdlib.h>
// #include<stdio_ext.h>
// #include<string.h>
// #include<ctype.h>

// void sort_names(char (* name)[20], int n);
// void sort_names_inbuilt(char (* name)[20], int n);

// void my_strcpy(char *dest,char *src);
// int my_strcmp(char *str1,char *str2);

// int main()  {
//     int n,ch;
//     scanf("%d",&n);
//     while( ch =getchar() != '\n' && ch != EOF );
//     // __fpurge(stdout);
    
//     char (*name)[20];
//     name = malloc(n * sizeof(char[20]));
//     if(name == NULL){
//         perror("Error ");
//         return 1;
//     }
    
//     int i;
//     for( i =0;i <n;i++){
//       printf("[%d] =>",i+1);
//         scanf("%19s",name[i]);
//          while( ch =getchar() != '\n' && ch != EOF );
//         //  __fpurge(stdout);
//     }
    
    
//     sort_names( name, n);
//     // sort_names_inbuilt( name, n);
// }



// int my_strcmp(char *s1,char *s2){
//   char str1[20],str2[20];
//    for (int i = 0; s1[i] != '\0'; i++) {
//         str1[i] = tolower(s1[i]);  // convert each character
//     }

//     for (int i = 0; s1[i] != '\0'; i++) {
//         str2[i] = tolower(s2[i]);  // convert each character
//     }
//   int i=0;

//   while(str1[i]!= '\0' || str2[i]!= '\0'){
//     if((str1[i] - str2[i]) < 0 ){
//       return -1;
//     }if((str1[i] -str2[i]) > 0){
//       return 1;
//     }
//      i++;
//   }

//   return 0;
// }

// void my_strcpy(char *dest,char *src){
//   int i=0;
//   while(dest[i]!= '\0' || src[i] != '\0'){
//     dest[i]=src[i];
//         i++;
//   }
// }
// void sort_names(char (* name)[20], int n){
//     int i,j;
//     for(j=0;j<n-1;j++){
//     for(i = 0;i < n-1-j ;i++){
//         if(my_strcmp(name[i],name[i+1]) > 0){
//             char temp[20];
//             my_strcpy(temp, name[i]);
//             my_strcpy(name[i], name[i+1]);
//             my_strcpy(name[i+1], temp);
//         }
//     }
//   }


//     for(i=0;i<n;i++){
//       printf("%s ",name[i]);
//     }
      
// }
