#include <stdio.h>
// int matrix_search(int **arr,int r,int c,int target){
//    int i,j;
//     for(i = 0; i < r ;i++ ){
//         for( j = 0; j < c; j++){
//             if(arr[i][j] == target){
//                 return 1;
//             }
//         }
//     }
//     return 0;
// }

int matrix_search(int** matrix, int matrixSize, int* matrixColSize, int target) {
    int m = matrixSize;
    int n = matrixColSize[0];   // all rows have same length in this problem

    int left = 0, right = m * n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        int row = mid / n;
        int col = mid % n;

        if (matrix[row][col] == target) {
            return 1;
        } else if (matrix[row][col] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return 0;
}


int main(){
  int r,c;
  printf("Enter row and column: ");
  scanf("%d %d",&r,&c);
int arr[r][c];
  printf("Enter row and column elelemts: ");
  for(int i =0;i<r;i++){
    for(int j=0;j<c;j++){
      scanf("%d",&arr[i][j]);
    }
  }

  int *ptr[r];
  for(int i=0;i<r;i++){
    ptr[i] = arr[i];
  }
  printf("Enter target: ");
  int target;
  scanf("%d",&target);
  int ret = matrix_search(ptr,r,&c,target);
  if(ret){
    printf("TRUE\n");
  }
  else{
    printf("FALSE\n");
  }


}