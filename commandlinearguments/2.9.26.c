#include<stdio.h>
#include <stdlib.h>

#if 1
//print cmd line argument
int main(int argc, char *argv[]){
  int i;
  printf("Count : %d\n",argc);
  for(i =0;i<argc;i++){
    printf("%d. %s\n",i+1,argv[i]);

  }
}

#endif


#if 0
//print cmd line argument
int main(int argc, char *argv[]){
  int i;
  printf("Count : %d\n",argc);
  for(i =0;argv[i] != NULL;i++){
    printf("%d. %s\n",i+1,argv[i]);

  }
}
/*
gowtham@Gow thamKR:~/cprogram/commandlinearguments$ gcc 2.9.26.c
gowtham@GowthamKR:~/cprogram/commandlinearguments$ ./a.out gowtham  1 2 3 4 5 6 7 8
Count : 10
1. ./a.out
2. gowtham
3. 1
4. 2
5. 3
6. 4
7. 5
8. 6
9. 7
10. 8

*/
#endif

#if 0
//print the envorimental avariable
//command  = "env"
    //"printenv"

int main(int argc, char *argv[],char *envp[]){
  int i;
  printf("Count : %d\n",argc);
  for(i =0;envp[i] != NULL;i++){
    printf("%d. %s\n",i+1,envp[i]);

  }
}

#endif

#if 0
// echo $name
#include <stdlib.h>
int main(int argc, char *argv[],char *envp[]){
 char *ptr;
 ptr = getenv("name");
 if(ptr == NULL){
  printf("Not found\n");
 }else{
  printf("Found : %s\n",ptr);
 }
}

#endif



#if 0
// set envorinmental function
//export name=gowtham 

int main(int argc, char *argv[],char *envp[]){
   char *ptr;
 ptr = getenv("name11");
 if(ptr == NULL){
  printf("Not found\n");
 }else{
  printf("Found : %s\n",ptr);
 }
 setenv("name11","123456",0);//set the envorinmental variable

 ptr = getenv("name11");
 if(ptr == NULL){
  printf("Not found\n");
 }else{
  printf("Found : %s\n",ptr);
 }

}
#endif


#if 0
// deleted

int main(int argc, char *argv[],char *envp[]){
   char *ptr;
 ptr = getenv("name1");
 if(ptr == NULL){
  printf("Not found\n");
 }else{
  printf("Found : %s\n",ptr);
 }
 setenv("name11","123456",0);

 ptr = getenv("name11");//get the envorinmental variable

 if(ptr == NULL){
  printf("Not found\n");
 }else{
  printf("Found : %s\n",ptr);
 }
unsetenv("name11");//delet the envorinmental variable 
 ptr = getenv("name11");
 if(ptr == NULL){
  printf("Not found\n");
 }else{
  printf("Found : %s\n",ptr);
 }

}
#endif