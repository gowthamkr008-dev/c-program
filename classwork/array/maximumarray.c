#include<stdio.h>
//max duplicate element
int main(){
int size;
scanf("%d",&size);
int arr[size];
printf("Enter the array value");
for(int i = 0;i<size;i++){
scanf("%d",&arr[i]);
}
int count =0;
for(int i=0;i<size;i++){
	for(int j=i+1;j<size;j++){
	if(arr[i] == arr[j]){
		printf("%d ",arr[i]);
		count++;

}
}
}
if(count ==0){
printf("No duplicate number");
}
return 0;
}


