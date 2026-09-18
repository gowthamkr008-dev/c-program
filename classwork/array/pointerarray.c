#include<stdio.h>
#if 0
//way of print
int main(){
int arr[5] = {10,20,30,40,50};
int *ptr ;
ptr = arr;
int i;
for( i=0;i<5;i++){
printf("%d ",arr[i]);
printf("%d ",ptr[i]);
printf("%d ",i[arr]);
printf("%d ",i[ptr]);
printf("%d ",*(ptr + i));
printf("%d ",*(arr +i));
printf("%d ",*(i + arr));
printf("%d ",*(i + ptr));


printf("\n");
}
return 0;
}

/*  way of printing array
10 10 10 10 10 10 10 10
20 20 20 20 20 20 20 20
30 30 30 30 30 30 30 30
40 40 40 40 40 40 40 40
50 50 50 50 50 50 50 50
*/


#endif


#if 0

int main(){
int arr[5] = {10,20,30,40,50};
int *ptr1 ,*ptr2;
ptr1 = &arr[1];
ptr2 = &arr[4];
int i;
i =ptr2 - ptr1;
printf("%d ",i);


printf("\n");

return 0;
}


#endif



#if 1
//way of print
int main(){
int arr[5] = {10,20,30,40,50};
int *ptr1 ,*ptr2;
ptr1 = &arr[1];
ptr2 = &arr[4];
int i;
i =(char*)ptr2 - ptr1;
printf("%d ",i);


printf("\n");

return 0;
}


#endif
