#include<stdio.h>
#include<string.h>
#include<ctype.h>

int isPalindrome(char* s) ;
int main(){
  char s[150];
  scanf("%[^\n]",s);
  int flag = isPalindrome(s);
  if(flag){
    printf("is palandrome");
  }else{
    printf("Is not a palandrome");
  }
}


int isPalindrome(char* s) {
    char ret[strlen(s)+1];
    printf("%ld",strlen(s));
    int i=0,j=0;
    while(s[i] != '\0'){
        if(isdigit(s[i]) || isalpha(s[i])){
            ret[j] = tolower(s[i]);
            j++;
        }
        i++;
    }
    ret[j] = '\0';
    printf("%s\n",ret);

    int left = 0,right = strlen(ret)-1,flag =0;
    printf("%d",right);
    while(left<right){
        if(ret[left] == ret[right]){
            flag =1;
        }else{
            flag = 0;
            break;
        }
        left++;
        right--;
    }
    if(flag){
        return 1;
    }else{
        return 0;
    }    
}