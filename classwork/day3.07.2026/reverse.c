#include<stdio.h>
int main(){
	int n;

	printf("Enter the size of array");
	scanf("%d",&n);
	int arr[n];

	for(int i = 0;i<=n-1; i++){
		scanf("%d",&arr[i]);
	}
	 for(int i = 0;i<=n-1; i++){
                printf("%d ",arr[i]);
        }


	 printf("\n");
	 
	 int copy[n];
	 int i =n-1;
	 for(int j =0; j<=n-1;j++){
		 
			 copy[j]=arr[i];
		i--;	 
		 }
	 printf("\n");
	 for(int i = 0;i<=n-1; i++){
                printf("%d ",copy[i]);
        }

	 return 0;
}


