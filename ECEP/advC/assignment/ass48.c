#include<stdio.h>
#include<stdio_ext.h>
#include<stdlib.h>

void matrix_mul(int **mata, int r1, int c1, int **matb, int r2, int c2, int ** resmat, int *rr, int *rc)    // mata     ar  ac    matb    br   bc    res    rr   rc
{
int a,b,sum,r,c,i,j;
i =0,j=0;
rr = &r1;
rc = &c1;
   for(b = 0;b<c2;b++){
     for (r = 0;r<r1;r++){
      sum =0;
      for(c =0; c< c1;c++){
         sum += (mata[r][c] * matb[c][r]);
      }
      resmat[i][j++] = sum;
      
      // printf("matrix : %d %d %d\n",i,j++,sum);
      if(j == c1){
         i++;
         j =0;
      }
   }
}

}


int main(){
   int r1,c1,r2,c2,i,j;
    //  ar =  1st row
    //  ac = 1s col
    //  br = 2nd row
    //  bc = 2nd col

    printf("Enter matrix A row :");
    scanf("%d",&r1);
   __fpurge(stdout);
    
  printf("Enter matrix A column :");
    scanf("%d",&c1);
    __fpurge(stdout);
    
   //   int mata[r1][c1];  //first matrix

   int  **mata;
 mata =calloc(r1, sizeof(int *) );
 for(i =0 ;i < c1; i++){
   mata[i] = malloc(c2 *sizeof(int) );
 }
 printf("Enter the elements\n");
for(i = 0;i < r1;i++){
      for( j = 0 ; j < c1; j++){
         scanf("%d",&mata[i][j]);
         __fpurge(stdout);
      }
     }

  

 
  printf("Enter matrix B row :");
    scanf("%d",&r2);
    __fpurge(stdout);
    
  printf("Enter matrix B column :");
    scanf("%d",&c2);
    __fpurge(stdout);


    int  **matb;
 matb =calloc(r2, sizeof(int *) );
 for(i =0 ;i < c2; i++){
   matb[i] = malloc(c2 *sizeof(int) );
 }

for(i = 0;i < r2;i++){
      for( j = 0 ; j < c2; j++){
         scanf("%d",&matb[i][j]);
         __fpurge(stdout);
      }
     }

         printf("Matrix 1 : \n");
    for(i = 0;i < r1;i++){
      for( j = 0 ; j < c1; j++){
         printf("%d ",mata[i][j]);
      }
      printf("\n");
     }

          printf("Matrix 2 : \n");

    for(i = 0;i < r2;i++){
      for( j = 0 ; j < c2; j++){
         printf("%d ",matb[i][j]);
      }
      printf("\n");
     }


       int  **resmat;
      int  rr = r1, rc = c1;

resmat =calloc(rr, sizeof(int *) );
 for(i =0 ;i < rc; i++){
   resmat[i] = malloc(c2 *sizeof(int) );
 }


matrix_mul(mata, r1, c1,matb, r2, c2, resmat,&rr,&rc);    // mata     ar  ac    matb    br   bc    res    rr   rc

printf("Result\n");
for( i =0 ;i<rr;i++){
   for(j =0;j<rc;j++){
      printf("%d ",resmat[i][j]);
   }
   printf("\n");
}



     return 0;
}