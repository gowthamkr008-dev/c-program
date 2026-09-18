#include<stdio.h>
int main(){
	int num;
	printf("Enter size of array: ");
	scanf("%d",&num);

	int i;
	int arr[num];
	for(i=0;i<num;i++){
		scanf("%d",&arr[i]);
	}

	printf("Enter target value: ");
	int target;
	scanf("%d",&target);
	int ret_arr[2];

	int present=0;
	for(i=0;i<num;i++){
		for(int j=0;j<num;j++){
			if(arr[i]+arr[j] == target){
				ret_arr[0] = i;
				ret_arr[1] = j;
				present =1;	
			}
		}
	}

	if(present ==1)
	printf("%d , %d",ret_arr[0],ret_arr[1]);
	else
		printf("no value has added");
return 0;
}
