#include<stdio.h>
#if 0
int add(int x,int y){
  return x +y;
}
int sub(int x,int y){
  return x-y;
}
int main(){
  printf("%p\n",main);
  printf("%p\n",add);
  printf("%p\n",sub);
  
}
#endif

#if 0
int add(int x,int y){
  return x +y;
}
int sub(int x,int y){
  return x-y;
}
int main(){
  int (*fp)(int,int);
  fp = add; //store the functionaddress
  printf("%p\n",add);
  printf("%p\n",fp);

   fp = sub;
  printf("%p\n",sub);
  printf("%p\n",fp);
  
}
#endif

#if 0
//function calling
int add(int x,int y){
  return x +y;
}
int sub(int x,int y){
  return x-y;
}
int main(){
  int (*fp)(int,int);
  fp = add; //store the functionaddress
  printf("%d\n",add(10,20));
  printf("%d\n",fp(12,24));

   fp = sub;
  printf("%d\n",sub(20,10));
  printf("%d\n",fp(30,20));
  
}
#endif
#if 1
//function calling
//with derefunction
int add(int x,int y){
  return x +y;
}
int sub(int x,int y){
  return x-y;
}
int main(){
  int (*fp)(int,int);
  fp = add; //store the functionaddress
  printf("%d\n",add(10,20));
  printf("%d\n",fp(12,24));
   printf("%d\n",(*fp)(12,24));

   fp = sub;
  printf("%d\n",sub(20,10));
  printf("%d\n",fp(30,20));
   printf("%d\n",(*fp)(30,20));
}
#endif

#if 1

#endif

#if 1

#endif

#if 1

#endif

#if 1

#endif