#include<stdio.h>

int main(){
        int size;

	printf("Enter size: ");
        scanf("%d",&size);
        int arr[size];
        int i;
	int k ;
	printf("Enter how many time rotate");
	scanf("%d",&k);

	getchar;
	printf("Enter the array element");
        for(i =0; i< size;i++){
                scanf("%d",&arr[i]);
        }
        
	getchar;
	printf("before rotate : ");
        for(i=0;i<size;i++){

                printf("%d ",arr[i]);
        }

        int left,right;
        int j =size-1;
    
    for(int j =0;j<=k;k++){

	    int temp = arr[0];
    	    for(i=0;i<size;i++){

        arr[i] = arr[i+1];
        }

        arr[size-1] = temp;
    }
         printf("left : ");
        for(i=0;i<size;i++){

                printf("%d ",arr[i]);
        }
}
     
