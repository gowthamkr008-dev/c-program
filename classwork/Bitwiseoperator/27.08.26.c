#include<stdio.h>

#if 0
int main(){
  int num;
  printf("Enter a number: ");
  scanf("%d",&num);

  int i;
  for(i=31;i>=0;i--){
    if(num & (1 << i))
      printf("1");
    else
      printf("0");
  }
printf("\n");
}
#endif


#if 0
int main(){
  int num;
  printf("Enter number: ");
  scanf("%d",&num);
  for(int i =31;i>=0;i--){
    printf("%d", (num >> i) & 1);
  }

  printf("\n");
}
#endif


#if 0
/*
swap nibble
i/p   ab
o/p   ba
*/
int main(){
    char ch = 0xAB;
    printf("%x\n",ch);

    return 0;
}

#endif

#if 0
/*
swap nibble
*/

int main(){
  unsigned char ch = 0xAB;
  ch = (ch << 4) | (ch >> 4);
  printf("%x\n",ch);

}
#endif

#if 1

int main(){
  char ch = 0xAB;
  ch = (ch << 4) | ((ch >> 4) & 0x0F);
  printf("%hhx\n",ch);

}
#endif

#if 1
//swap nibble
#include<stdio.h>
#include<ctype.h>
int main(){
    char c1, c2;
    scanf(" %c %c", &c1, &c2);

    unsigned char n1 = isdigit(c1) ? c1 - '0' : tolower(c1) - 'a' + 10;
    unsigned char n2 = isdigit(c2) ? c2 - '0' : tolower(c2) - 'a' + 10;

    unsigned char num = (n1 << 4) | n2;      // combine into byte: ab -> 0xAB
    unsigned char res = (num << 4) | (num >> 4);  // swap nibbles -> 0xBA

    printf("%hhx\n", res);

    return 0;
}

#endif