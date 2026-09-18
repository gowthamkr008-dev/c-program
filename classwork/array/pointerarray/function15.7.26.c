#if 1

#include<stdio.h>
int *modify(int *arr,int size);//function decleration
void print_array(int arr[],int size);


int main(){
int size =5;
int arr[5]  ={10,20,30,40,50};
printf("%zu\n",sizeof(arr)); // 20 byte
int *newarray_vla;
print_array(newarray_vla ,size);
newarray_vla = modify(arr,size);//function call
print_array(newarray_vla ,size);
return 0;
}
//function defination
void print_array(int arr[],int size){
int i;
for(i =0;i<5;i++){
printf("index %d has element %d\n",i,arr[i]);
}
}

int modify(int arr[],int size){
printf("%zu\n",sizeof(arr)); // 4 or 8 byte
int i;
for(i=0;i<size;i++){
*(arr+i) += 10;
}
}




#endif
