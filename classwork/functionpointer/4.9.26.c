#include<stdio.h>

#if 0
int add(int x,int y){
  return x+y;
}
int oper(int x,int y){
  return add(x , y);
}

int main(){
  printf("%d",oper(10,20));
  return 0;
}
#endif

#if 0
//use function pointer
int add(int x,int y){
  return x+y;
}

int sub(int x,int y){
  return x-y;
}

// int oper(int (*fname)(int ,int),int x,int y)
int oper(int (*fname)(int ,int),int x,int y){
  return fname(x , y);
}

int main(){
  printf("%d\n",oper(sub,10,20));
  return 0;
}

#endif

#if 0
//use function pointer
int add(int x,int y){
  return x+y;
}

int sub(int x,int y){
  return x-y;
}

// int oper(int ( fname)(int ,int),int x,int y)
int oper(int (*fname)(int ,int),int x,int y){
  return fname(x , y);
}

int main(){

    printf("%d\n",oper(add,10,20));
  printf("%d\n",oper(sub,10,20));
  return 0;
}


#endif

#if 0
int add(int x,int y){
  return x+y;
}

int sub(int x,int y){
  return x-y;
}

// int oper(int ( fname)(int ,int),int x,int y)
int oper(int (*fname)(int ,int),int x,int y){
  return fname(x , y);
}

int main(){

  int(*fp)(int ,int);
  fp =add;
  printf("%d\n",oper(fp,10,20));
  
  fp =sub;
  printf("%d\n",oper(fp,10,20));
  return 0;
}
#endif

#if 0
//array of function pointer
int add(int x,int y){
  return x+y;
}

int sub(int x,int y){
  return x-y;
}

// int oper(int ( fname)(int ,int),int x,int y)
int oper(int (*fname)(int ,int),int x,int y){
  return fname(x , y);
}

int main(){

  int(*fp[2])(int ,int);
  fp[0] =add;
  printf("%d\n",oper(fp[0],10,20));
  
  fp[1] =sub;
  printf("%d\n",oper(fp[1],10,20));
  return 0;
}
#endif

#if 0
//atexit
#include<stdlib.h>
void my_exit(void){
  printf("Exit function\n");
}
void test(){
  printf("int test\n");
  // exit(0);//it is a function
  // return //it is a key word
}
int main(){
  atexit(my_exit);
  test();
  printf("Hi\n");
  return 0;
}

#endif

#if 0
#include<stdlib.h>
void my_exit(void){
  printf("Exit function\n");
}
int main(){
  atexit(my_exit);
  atexit(my_exit);
  atexit(my_exit);
  atexit(my_exit);
  //for each reg call function
  //call reverse order

  printf("Hi\n");
  return 0;
}
#endif

#if 0
#include<stdlib.h>
void my_exit1(void){
  printf("1. Exit function\n");
}

void my_exit2(void){
  printf("2. Exit function\n");
}
void my_exit3(void){
  printf("3. Exit function\n");
}
int main(){
  atexit(my_exit1);
  atexit(my_exit2);
  atexit(my_exit3);
  //for each reg call function
  //call reverse order
/*
Hi
3. Exit function
2. Exit function
1. Exit function
*/
  printf("Hi\n");
  return 0;
}
#endif


#if 0
//qsort
//short any array
#include<stdlib.h>
int compareasc(const void *p1,const void *p2){//short ascending 
  return *(int *)p1 > *(int *)p2;
}
int comparedsc(const void *p1,const void *p2){
  return *(int *)p1 < *(int *)p2;
}
void printarr(int arr[],int size){
  int i;
  for(i=0;i<size;i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
}
int main(){
  int arr[] = { 9 ,1,4,7,3,6};
  qsort(arr,6,sizeof(int),compareasc);
  printf("Ascend: ");
  printarr(arr,6);
  qsort(arr,6,sizeof(int),comparedsc);
    printf("Dscend: ");
  printarr(arr,6);
}

#endif

#if 0
//qsort
//short any array
#include<stdlib.h>
int compareasc(const void *p1,const void *p2){//short ascending 
  return *(double *)p1 > *(double *)p2;

}
void printarr(double arr[],int size){
  int i;
  for(i=0;i<size;i++){
    printf("%.2f, ",arr[i]);
  }
  printf("\n");
}
int main(){
  double arr[] = { 9.1234 ,1.1212,4.123,7.543,3.6543,6.234};
  qsort(arr,6,sizeof(double),compareasc);
  printf("Ascend: ");
  printarr(arr,6);
 
}

#endif

#if 0
//qsort
//short any array
#include<stdlib.h>
#include<string.h>
int compareasc(const void *p1,const void *p2){//short ascending 
  // return *(char *)p1 > *(char *)p2;//it work only one char

  return strcmp(p1,p2);//work  only stringcmo
}
void printarr(char arr[][20],int size){
  int i;
  for(i=0;i<size;i++){
    printf("%s, ",arr[i]);
  }
  printf("\n");
}
int main(){
  // char arr[][20] = {"ram","shahi","vikas","kriti","ajay"};
    char arr[][20] = {"asik","abdul","vikas","anand","ajay"};
  qsort(arr,5,sizeof(char[20]),compareasc);
  printf("Ascend: ");
  printarr(arr,5);
 
}
#endif

#if 0
#include<stdlib.h>
#include<string.h>
int compareasc(const void *p1,const void *p2){//short ascending 
  // return *(char *)p1 > *(char *)p2;//it work only one char

  return strcmp(p1,p2);//work  only stringcmo
}
void printarr(char arr[],int size){
  int i;
  for(i=0;i<size;i++){
    printf("%c, ",arr[i]);
  }
  printf("\n");
}
int main(){
  // char arr[][20] = {"ram","shahi","vikas","kriti","ajay"};
    char arr[] = {'a','f','g','u','j','w'};
  qsort(arr,6,sizeof(char),compareasc);
  printf("Ascend: ");
  printarr(arr,5);
 
}
#endif

#if 0
#include<stdio.h>
#include<stdlib.h>

int main(int arg,char *argv[]){
    float avg =0;
    int num=0;
    for(int i=1;i<arg;i++){
        num = atoi(argv[i]);
        avg+=num;
    }
    printf("%f\n",avg /(arg-1));
}
#endif

#if 1
//qsort
//short any array
//bsearch only for osorted array
#include<stdlib.h>
int compareasc(const void *p1,const void *p2){//short ascending 
  if( *(int *)p1 > *(int *)p2){
    return 1;
  }
   return 0;
}
int comparedsc(const void *p1,const void *p2){
  return *(int *)p1 < *(int *)p2;
}
void printarr(int arr[],int size){
  int i;
  for(i=0;i<size;i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
}
int main(){
  int arr[] = { 9 ,1,4,7,3,6};
  qsort(arr,6,sizeof(int),compareasc);
  printf("Ascend: ");
  printarr(arr,6);
  qsort(arr,6,sizeof(int),comparedsc);
  printf("Dscend: ");
  printarr(arr,6);


  int num =5;
int *ptr;
 qsort(arr,6,sizeof(int),compareasc);
  ptr = bsearch(&num,arr,5,sizeof(int),compareasc);

  ptr ==NULL ? printf("NOt found\n"):printf("found\n");

}
#endif

#if 1

//bubble sort in one function with single loop function


void bubble(int arr[],int size,int (*cmp)(int,int)){
int i,j;
int temp;
 for(i =0;i<size-1;i++){
  for(j =0;j<size-1;j++){
    if(cmp(arr[j],arr[j+1])){
      temp = arr[j];
      arr[j] = arr[j+1];
      arr[j+1] = temp;
    }
  }
 } 

}

int ase(int x,int y){
  return x > y;
}
int des(int x,int y){
  return x < y;
}


#endif

#if 1

#endif

#if 1

#endif