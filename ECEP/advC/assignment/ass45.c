#include<stdio.h>
#include<stdlib.h>

void magic_square(int **ptr, int n);

  void print_matrix(int **ptr,int n);

int main(){
  int n;
  scanf("%d",&n);
  if(n <=0 || (n % 2 == 0) ){
    printf("Error: Please enter positive values\n");
    return 0;
  }
  int **ptr ;
  int i;
  ptr = calloc(n,sizeof(int *));
  
  for(i =0 ;i< n;i++){
    ptr[i] = calloc(n,sizeof(int));
  }

  // print_matrix(ptr,n);
  magic_square(ptr,n);
}


void magic_square(int **ptr, int n){
  int i= 1;
  int col = n/2;
  int row =0;
  while( i != ((n*n)+1)){
     ptr[row][col] = i;
     int n_row = (row - 1 + n) %n;
     int n_col = (col +1 )%n;

     if(ptr [n_row][n_col] != 0){
      row =(row + 1) % n;
     }else{
      row = n_row;
      col = n_col;
     }


    i++;
  }

  print_matrix(ptr,n);




}



void print_matrix(int **ptr,int n){
  for(int r =0;r < n;r++){
    for(int j=0;j<n;j++){
    printf("%4d  ",ptr[r][j]);
    }
    printf("\n");
  }

  }