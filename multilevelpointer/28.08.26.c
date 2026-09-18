#include<stdio.h>

#if 0

int main()
{
int num = 10;
int *ptr1 = &num;
int **ptr2 = &ptr1;
int ***ptr3 = &ptr2;
printf("%p\n", ptr3);
printf("%p\n", *ptr3);
printf("%p\n", **ptr3);
printf("%d\n", ***ptr3);
return 0;
}

#endif

#if 0
void fun1(int num){

}
void fun2(int *ptr){
  
}void fun3(int *ptr){
  
}void fun4(int **ptr){
  
}

int main(){
  int num =100;
  int *ptr = &num;
  fun1(num);
    fun2(&num);
      fun3(ptr);
        fun4(&ptr);



  return 0;
}

#endif


#if 0
int main(){
  int arr[5] = {10,20,30,40,50};

  printf("%u\n",arr);
    printf("%u\n",&arr[0]);
      printf("%u\n\n",&arr);

        printf("%u\n",arr+1);
          printf("%u\n",&arr[0] + 1);
            printf("%u\n",&arr + 1);
}


#endif

#if 1




#endif

#if 1

#endif