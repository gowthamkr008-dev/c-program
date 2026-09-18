#include<stdio.h>
//example of volatiles

#if 0
int main(){
  long unsigned int wait;
  unsigned char  bit = 0;
  while(1){
    bit = !bit;
    printf("Bit is %d\r",bit);
    fflush(stdout);
    for(wait = 0xfffffff;wait--;);

  }


}


#endif

#if 0
int main(){

  // when weneed optimisaiton do avoid unnecessary code use  gcc filename.c -03
    
    //  volatile unsigned int i;    //-O3      loop work
     unsigned int i;               //  -O3      loop not work 
    int num;
    // fflush(stdout);
    for(i=0;i< 0xffffffff;i++){  
      num =5;
    }
     printf("number is %d\n",num);

    return 0;

}

#endif

#if 0

int main(){
  int get_out;
  scanf("%d",&get_out);
  // volatile int num=0;  //-O3 loop will execute
  int num =0;     //-03 loop will not execute
  while(get_out){
    num++;
  }
  return 0;
}

#endif

#if 0

int main(){
  int num1;
  volatile int num2 =1;
  num1 = ++num2 + num2++ +num2++ +num2++;
          // ++1 + 2++   + 3++ + 4++   
         //  2     2       3      4        ==11  with volatile
            //  2+2+3+4         = 12 without  -O3

          printf("%d\n",num1);
}
// load to cpu register
//with volatile
// gcc 10.9.26.c -O3 
  // ./a.out = 11

//without volatile
  //gcc 10.9.26.c -o3
 // ./a.out  ==12
#endif

#if 1


#endif

#if 1

#endif

#if 1

#endif

#if 1

#endif