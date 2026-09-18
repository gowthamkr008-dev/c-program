#include<stdio.h>
#include<string.h>
#include<ctype.h>

#if 0
int main(){

  char ch;
  ch =getchar();

  printf("read the i/p from user to use getchar : %c" ,ch);

  return 0;
}

#endif

#if 1

int main(){
    char ch;
    scanf("%c",&ch);

    printf("%d",isdigit(ch));
}
#endif