#include<stdio.h>
#include<string.h>
#include <stdlib.h>




int main(){
  char num1[10];
  char num2[10];
  scanf("%s",num1);
  scanf("%s",num2);
   char * ptr = multiply(num1,num2);
  printf("%s\n",ptr);


}


char* multiply(char* num1, char* num2) {
   char *resultStr = malloc(205); // static so we can return safely
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int result[205] = {0};

    // multiply digit by digit
    for (int i = len1 - 1; i >= 0; i--) {
        for (int j = len2 - 1; j >= 0; j--) {
            int d1 = num1[i] - '0';
            int d2 = num2[j] - '0';
            result[i + j + 1] += d1 * d2;
        }
    }

    // handle carry
    for (int k = len1 + len2 - 1; k > 0; k--) {
        result[k - 1] += result[k] / 10;
        result[k] %= 10;
    }

    // build string result
    int start = 0;
    while (start < len1 + len2 && result[start] == 0) start++;

    if (start == len1 + len2) {
        strcpy(resultStr, "0");
    } else {
        int idx = 0;
        for (int k = start; k < len1 + len2; k++) {
            resultStr[idx++] = result[k] + '0';
        }
        resultStr[idx] = '\0';
    }

    return resultStr;
}



// void  multiply(char *num1, char *num2){
//   int n1 =0,n2 =0;
//   int i;
//   while(num1[i] != '\0'){
//     n1 = (n1 *10) + num1[i]-'0';
//     i++;
//   }
//   i=0;
//    while(num2[i] != '\0'){
//     n2 = (n2 *10) + num2[i]-'0';
//     i++;
//   }
//   int num = n1 * n2;
//   i=0;
//   char *res = malloc(20);
//   int digit=0;
//   while(num != 0){
//     digit = num % 10;
//     res[i++] = digit + '0';
//     num = num / 10;
   
//    }
//   res[i]='\0';
//   // printf("%s\n",res);
//   int left =0,right =strlen(res)-1;
//   char temp;
//   while(left <right){
//     temp = res[left];
//     res[left] = res[right];
//     res[right] = temp;
//     right--;
//     left++;
//   }
//   // printf("%s\n",res);
//   return res;
//  free(res);
// }
