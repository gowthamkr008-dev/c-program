#include<stdio.h>
int main(){
    int n,i,j,k;
   // printf("Enter n :");
    scanf("%d",&n);

for(int i = 1; i <= n;i++){
       for(int j = 1; j < n - i;j++ ){//ok
        printf(" ");//ok
    }//ok
   
    for(int l =i; l>=1;l--){
    printf("%d ",l);
   }
   
   
    for(int k = 2;k <= i; k++){//ok
     printf("%d ",k);//ok
    }//ok

    
    printf("\n");
}

return 0;
}

