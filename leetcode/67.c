#include<stdio.h>
#include <string.h>
char *  binary(char *a,char *b){
 int r =0,res =0;
for (int i = 0; i < strlen(a); i++) {   // BUG: len - 1 skips the last digit
    r = r * 2 + (a[i] - '0');
}
for (int i = 0; i < strlen(b); i++) {   // BUG: len - 1 skips the last digit
    res = res * 2 + (b[i] - '0');
}
int j=0, ret = r + res;
char result[31];
  for(int i=0;i<31;i++){
    if(ret & (1 << i))
     result[j++] = '1';
    else
     result[j++] = '0';
  }
  result[j]='\0';
int count=0;
while(j != 0){
if(result[j] == '1'){
  j++;
  break;
}else{
  count++;
}
j--;
}
result[j] ='\0';
int left =0,right =strlen(result)-1;
char temp;
while(left<right){
  temp = result[left];
  result[left] = result[right];
  result[right] =temp;
  right--;
  left++;
}

printf("%s\n",result);


}

int main(){
    char a[10];
    char b[10];
    scanf("%s",a);
    fflush(stdout);
    scanf("%s",b);
      binary(a,b);
    printf("%ld",strlen(a));
}



//     int r =0,res =0;
// for (int i = 0; i < strlen(a); i++) {   // BUG: len - 1 skips the last digit
//     r = r * 2 + (a[i] - '0');
// }
// for (int i = 0; i < strlen(b); i++) {   // BUG: len - 1 skips the last digit
//     res = res * 2 + (b[i] - '0');
// }
// int j=0, ret = r + res;
// char *result = (char*)malloc(33);
//   for(int i=0;i<31;i++){
//     if(ret & (1 << i))
//      result[j++] = '1';
//     else
//      result[j++] = '0';
//   }
//   j--;
//   result[j]='\0';
// while(j != 0){
// if(result[j] == '1'){
//   j++;
//   break;
// }
// j--;
// }
// result[j] ='\0';
// int left =0,right =strlen(result)-1;
// char temp;
// while(left<right){
//   temp = result[left];
//   result[left] = result[right];
//   result[right] =temp;
//   right--;
//   left++;
// }

// return result;
// free(result);

// }





// algorithm for binary sum

// 1 convert string into integer
// 2 add the 2 integer
// 3 convert the binary and store the string
// 4 find from last to start find 1 then skip and increment by 1
// 5 and put null on that place
// 6 reverse the string 
// 7 then the output
