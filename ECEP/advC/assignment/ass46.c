#include <stdio.h>
#include<stdlib.h>
void fragments(int row,int *col, float *ptr[]);

int main()
{
   int row;
   printf("Enter no of rows: ");
   scanf("%d",&row);
   
   float *ptr[row];
   
   int col[row];
   int i,j;
   for( i=0;i<row;i++){
       printf("Enter no of column i row[%d] : ",i);
       scanf("%d",&col[i]);
   }
   
   for(i=0;i<row;i++){
       ptr[i] =  malloc(col[i] * sizeof(float) );
   }
   
   for(i = 0;i < row; i++ ){
     printf("Enter %d values for row[%d] :\n",col[i],i);
      for(j = 0;j < col[i];j++){
          scanf("%f",&ptr[i][j]);
      } 
   }

   printf("\n\n");
   fragments(row,col,ptr);
    
   for(i = 0;i < row; i++){
       free(ptr[i]); 
       }
   
}



void fragments(int row,int *col, float *ptr[]){
    int sum=0,i,j,k;
    float avg;
    for(i =0 ;i<row;i++){
        sum =0;
        for(j=0;j<col[i];j++){
            sum += ptr[i][j];
        }
        printf("Sum = %d\n",sum);
        ptr[i] = realloc(ptr[i],( col[i]+1 ) *sizeof(float));

        avg =(float)sum/col[i];
        printf("Average = %.3f\n",avg);
        ptr[i][col[i]] =avg;              //store average
        col[i] +=1;

    }

    printf("\n\nbefore sorting\n");

   for(i=0;i<row;i++){
   for( k=0;k < col[i]; k++){
          printf("%.3f ",ptr[i][k]);
      }
      printf("\n");
    }
     

    float *ftemp;
    int temp;
// printf("Print the stored elements: \n");
    for(j=0;j<row-1;j++){
        for(i=0;i<row-1;i++){
              if( ptr[i][(col[i])-1] > ptr[i+1][(col[i+1])-1]){
                ftemp = ptr[i];
                ptr[i] =ptr[i+1];
                ptr[i+1] = ftemp;

                temp = col[i];
                col[i] =col[i+1];
                col[i+1] = temp;
                // i=0;
        }

    }
    }
    printf("\n\nAfter sorting\n");

   for(i=0;i<row;i++){
   for( k=0;k < col[i]; k++){
          printf("%.3f ",ptr[i][k]);
      }
      printf("\n");
    }
     







}
    //      int sum =0;
//      float average;
//      int i,j,k;
//      for(i = 0;i < row; i++){
//       sum =0;
//       for(j = 0;j < col[i];j++){
//           sum += ptr[i][j];
//       }

//       // printf("sum %d\n",sum);
//      ptr[i] = realloc(ptr[i],((col[i]+1) * sizeof(float)) );
      
//       average = (float)sum / col[i];
//       // printf("average : %g\n",average);
//       ptr[i][col[i]] = average;
//       for( k=0;k < col[i]+1; k++){
//           printf("%g ",ptr[i][k]);
//       }
//       // printf("average : %g",average);
//       printf("\n");
//    }
    
//    int temp;
//    float * ftemp;
//    //short the arr
//    for(i = 0;i <row ;i++){
//     for(j = 0 ;j < col[row]-1;j++){
//       if( ptr[i][col[j]] > ptr[i+1][col[j+1]]){
//         ftemp = ptr[i];
//         ptr[i] =ptr[i+1];
//         ptr[i+1] = ftemp;

//         temp = col[i];
//         col[i] =col[i+1];
//         col[i+1] = temp;
        
//         i--;
//       }
//     }
   
//    }
//     printf("\n\nAfter sorting\n");

//    for(i=0;i<row;i++){
//    for( k=0;k < col[i]+1; k++){
//           printf("%.3f ",ptr[i][k]);
//       }
//       printf("\n");
//     }
     
     
// }
















