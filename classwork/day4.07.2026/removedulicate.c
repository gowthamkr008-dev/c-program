//remove duplicate
//without array is called inplaced algorithm
//
//
#include<stdio.h>
int main(){
        int size;

        printf("Enter the size of array");
        scanf("%d",&size);

        int arr[size],i;
        printf("Enter array element are");
        for(i =0;i<size;i++){
                scanf("%d,",&arr[i]);
        }



	int uniq_arr[size];

	for(i=0;i<size;i++){
	
		uniq_arr[i]=arr[i];
	
	}


	int s =0;
	for(i =0;i<size;i++){
		for(int j=0;j<size;j++){
			if(arr[i] == arr[j]){
				uniq_arr[j] = arr[j+1];
			s++;
			}else{
				uniq_arr[j]=arr[j];
				s++;
			}
		}
	}	
	  printf("array element are");
        for(i =0;i<s;i++){
                printf("%d,",arr[i]);
        }

        printf("\n");
}
