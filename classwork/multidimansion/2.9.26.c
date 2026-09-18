#include<stdio.h>
#include<stdlib.h>


#if 0
int main(){
  int (*ptr)[3];
  //both are same
  // ptr = malloc(sizeof(*ptr) *3);
  ptr =malloc(sizeof(int [3]) *3);
              //size of (data type * number of rows) * number of colums

  int i,j;
  //read the i/p
  for(i =0;i<3;i++){
    for(j =0;j<3;j++){
      scanf("%d",&ptr[i][j]);
    }
  }

  //print the o/p

  printf("Array Elements:\n");
  for(i =0;i<3;i++){    //rows
    for(j =0;j<3;j++){ //column
     printf("%d ",ptr[i][j]);
    }
    printf("\n");
  }

free(ptr);
  return 0;
}

#endif


#if 0
int main(){
  int (*ptr)[3];
  //both are same
  // ptr = malloc(sizeof(*ptr) *3);
  ptr =malloc(sizeof(int [3]) *3);
              //size of (data type * number of rows) * number of colums

  int i,j;
  //read the i/p
  for(i =0;i<3;i++){
    for(j =0;j<3;j++){
      scanf("%d",&ptr[i][j]);
    }
  }

  //print the o/p

  printf("Array Elements:\n");
  for(i =0;i<3;i++){    //rows
    for(j =0;j<3;j++){ //column
     printf("%d ",ptr[i][j]);
    }
    printf("\n");
  }

free(ptr);
  return 0;
}


#endif

#if 0

void print(int ptr[2][3]);


int main(){
  int arr[2][3] = {10,20,30,40,50,60};
  print(arr);//same 1d array
  return 0;
}

//pointer to array
// void print(int ptr[2][3])
// void print(int ptr[][3])
void print(int (*ptr)[3])
{
  int i,j;
  printf("Array: ");
  for(i =0;i<2;i++){
    for(j =0;j<3;j++){
      printf("%d ",ptr[i][j]);
    }
    printf("\n");
  }

}


#endif

#if 0


void print(int *ptr);


int main(){
  int arr[2][3] = {10,20,30,40,50,60};
  print(*arr);//deeferencing of arr
  print((int* )arr); //typecasting
  print(arr[0]);//access first 1 d element
  print(&arr[0][0]);//accessed by 1st 1d array 1st element
  return 0;
}


void print(int *ptr)
{
  int i,j;
  printf("Array: ");
  for(i =0;i<2;i++){
    for(j =0;j<3;j++){
      printf("%d ",ptr[i *3 + j]);
    }
    printf("\n");
  }

}

#endif

#if 0

void print(int *ptr);


int main(){
  int arr[2][3] = {10,20,30,40,50,60};
  print(*arr);//deeferencing of arr
  print((int* )arr); //typecasting
  print(arr[0]);//access first 1 d element
  print(&arr[0][0]);//accessed by 1st 1d array 1st element
  return 0;
}


void print(int *ptr)
{
  int i,j;
  printf("Array: ");
  for(i =0;i<2*3;i++){
      printf("%d ",ptr[i]);
    
    // 
  }
printf("\n");
}


#endif

#if 0
//pass to the functions
void print(int r,int c,int (*ptr)[c]);

int main(){
  int arr[2][3] = {10,20,30,40,50,60};
  print(2,3,arr);
  return 0;
}
void print(int r,int c,int (*ptr)[c])
{
  int i,j;
  printf("Array: ");
  for(i = 0;i < r;i++){
    for(j = 0;j < c;j++){
      printf("%d ",ptr[i][j]);
    }
    printf("\n");
  }

}
#endif

#if 1


#endif

#if 1


#endif

#if 1


#endif