#include<stdio.h>

#if 0
int main(){
int size;

scanf("%d",ptr);
int arr[size];
int *ptr = arr;
for(int i=0;i<size;i++){

scanf("%d",(ptr + i));//ptr+i
}


for(int i=0;i < size;i++){
printf("%d ",*(ptr + i)); 
}

printf("%d",*(ptr+i)); 


return 0;
}
#endif


#if 1
int main(){
int size;
scanf("%d",&size);
int arr[size];
int *ptr;
ptr = arr;
printf("Enter the array element : ");
for(int i=0;i<size;i++){

scanf("%d", ptr++);
}

//ptr =arr;
ptr = ptr - size;
printf("Array element : ");
for(int i=0;i<size;i++){
printf("%d ",*ptr++);
}

printf("\n");
return 0;
}
/*

5
Enter the array element : 132
62
45
23
42
Array element : 132 62 45 23 42


*/

#endif


























