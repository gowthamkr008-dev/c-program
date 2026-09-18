#include<stdio.h>
//variadic function
#include<stdarg.h>
//bsearch


#if 0
int add(int count ,...){
  va_list ap;        //decleare ptr
  int i,sum =0;
  va_start(ap,count);   //point to first element of function
  for(i=0;i<count ;i++){
    sum +=va_arg(ap,int); //return the value then increment the pointer 
  }
  va_end(ap);                   //delete the ptr

  return sum; 
}

int main(){
  int ret;
  ret =add(3,2,4,4);
  printf("sum of %d\n",ret);

  ret = add(5,3,3,4,5,20);
  printf("sum is %d\n",ret);

  //more count then argument
  ret = add(3,1,0);
  printf("sum %d\n",ret);

  // less count more arg
  ret = add(2,1,5,4,3);
  printf("sum %d\n",ret);

  return 0;
}

#endif

#if 1 


int main(){
  int arr[] = {};
  qsort(arr,5,)
ptr =bsearch (&num,arr,5,sizeof(int),compareAsc);

}
#endif