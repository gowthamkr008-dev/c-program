#include<stdio.h>


#if 0
//read and display 2d array
int main(){
    int r,c,i,j;
    printf("Enter the Row and Column : ");
    scanf("%d %d",&r,&c);

    int arr[r][c];
    printf("Enter %d Elements\n",r*c);

    for(i = 0;i < r; i++)
    {
      for(j =0;j < c;j++)
      {
        scanf("%d",&arr[i][j]);
      }

    }
    

     for(i = 0;i < r; i++)
    {
      for(j =0;j < c;j++)
      {
        printf("%d ",arr[i][j]);
        printf("%d ", *(arr[i] +j));
        printf("%d ",*(*arr +i) +j);
        printf("%d ",((*(arr +i))[j]));
      }
      printf("\n");

    }
}
/*
Enter the Row and Column : 2
2
Enter 4 Elements
1 2 3 4 
1 1 1 1 2 2 2 2 
3 3 2 3 4 4 3 4 
*/
#endif



#if 0
int main(){
  int a =10;
  int b=20;
  int c=30;

  int *ptr[3];

  //int *ptr[3] = { &a, &b, &c}
  ptr[0] =&a;
  ptr[1] =&b;
  ptr[2] =&c;
  

  printf("%d ",*ptr[0]);
  printf("%d ",*ptr[1]);
  printf("%d \n",*ptr[2]);
 int i,j;
 for( i=0;i<3;i++){
  printf("%d ",*ptr[i]);
 }

printf("\n");

 
for( i = 0; i < 3; i++)
{
  for(j = 0 ;j < 1;j++)
  {
    printf("%d ",ptr[i][j]);
  }
  
}

printf("\n");
return 0;

}

/*
10 20 30 
10 20 30 
10 
20 
30

*/

#endif



#if 0
// void print(int *ptr[]);
void print(int **ptr);
int main(){
  int a =10;
  int b=20;
  int c=30;

  int *ptr[3];

  //int *ptr[3] = { &a, &b, &c}
  ptr[0] =&a;
  ptr[1] =&b;
  ptr[2] =&c;
  

  printf("%d ",*ptr[0]);
  printf("%d ",*ptr[1]);
  printf("%d \n",*ptr[2]);
 int i,j;
 for( i=0;i<3;i++){
  printf("%d ", *ptr[i]);
 }

printf("\n");

 
for( i = 0; i < 3; i++)
{
  for(j = 0 ;j < 1;j++)
  {
    printf("%d ",ptr[i][j]);
  }
  
}

printf("\n");
return 0;

}

/*
10 20 30 
10 20 30 
10 
20 
30

*/

#endif


#if 1

// void print(int *ptr[]);
void print(int **ptr);
int main(){
  int a[2] ={10, 20};
  int b[2]={20,40};
  int c[2]= {30,35};

  // int *ptr[3];

  int *ptr[3] = { a, b, c};
  print(ptr);
 


return 0;

}

void print(int **ptr){

 int i,j;
for( i = 0; i < 3; i++)
{
  for(j = 0 ;j < 1;j++)
  {
    printf("%d ",ptr[i][j]);
  }
  
}

}

/*
10 20 30 
10 20 30 
10 
20 
30

*/

#endif