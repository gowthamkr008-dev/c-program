#include <stdio.h>
#if 1
// #define METHOD

int main(){
  #ifdef METHOD
    puts("hello world");
  #else 
    printf("hello World");
    #endif




  return 0;
}

/*
//preprocessor o/p 
// gcc headerfiles.c -E P 

int main(){
    puts("hello world");
      return 0;
}
*/
#endif

#if 0
#define m1
#define m2
int main(){

  #if defined  m1
  puts("Hello");
  #endif

  #if defined  m2
  printf("Hello");
  #endif

  #if defined  (m1) && defined (m2)
  printf("hello");
  puts("hwllo");
  #endif
  return 0;
}


/*
int main(){
  puts("Hello");
  printf("Hello");
  printf("hello");
  puts("hwllo");
  return 0;
}

*/


#endif

#if 0

#define M 3

int main(){
  #if m ==1
    puts("hello");
  #endif

  #if m ==2
  printf("Hello");
  #endif

  return 0
}
/*
int main(){
  return 0
}
  */

#endif


#if 0
//#include<stdio.h>
// #define SPACE_OPTIMIZED
int main(){
  int x = 10,y = 20;
  #ifdef SPACE_OPTIMIZED
    X =X^Y;
    Y = X^Y;
    X = X^Y;
    printf("select SPACE \n");
    #else
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("Selected time\n");
#endif
}


/*
int main(){
not definde SPACE_OPTIMIZED
  int x = 10,y = 20;
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("Selected time\n");
}
gowtham@GowthamKR:~/cprogram/classwork/preprocessor/24.08.2026$ gcc headerfiles.c -E -P
definde SPACE_OPTIMIZED inseide the program

int main(){
  int x = 10,y = 20;
    X =X^Y;
    Y = X^Y;
    X = X^Y;
    printf("select SPACE \n");
}
gowtham@GowthamKR:~/cprogram/classwork/preprocessor/24.08.2026$ gcc headerfiles.c -D SPACE_OPTIMIZED -E -P
definde SPACE_OPTIMIZED 
define during decleration using the -d then definde SPACE_OPTIMIZED

int main(){
  int x = 10,y = 20;
    X =X^Y;
    Y = X^Y;
    X = X^Y;
    printf("select SPACE \n");
}

*/

#endif


#if 0
//#include<stddio.h>
 #define debug_print

#if defined debug_print
#warning "Debug Enabled"
#endif

int main(){
  int x,y,sum;
  printf("Wnter 2 number:");
  scanf("%d %d",&x,&y);
  #ifdef debug_print
    printf(" x: %d y: %d\n",x,y);
  #endif
    sum  = x+y;
    printf("sum %d",sum);
    return 0

}
/*

without define debug_print
int main(){
  int x,y,sum;
  printf("Wnter 2 number:");
  scanf("%d %d",&x,&y);
    sum = x+y;
    printf("sum %d",sum);
    return 0
}


with define debug_print
gowtham@GowthamKR:~/cprogram/classwork/preprocessor/24.08.2026$ gcc headerfiles.c -E -P
headerfiles.c:150:2: warning: #warning "Debug Enabled" [-Wcpp]
  150 | #warning "Debug Enabled"
      |  ^~~~~~~
int main(){
  int x,y,sum;
  printf("Wnter 2 number:");
  scanf("%d %d",&x,&y);
    printf(" x: %d y: %d\n",x,y);
    sum = x+y;
    printf("sum %d",sum);
    return 0
}
gowtham@GowthamKR:~/cprogram/classwork/preprocessor/24.08.2026$ 
*/


#endif
#if 0
 //#define debug_print

#if defined debug_print
#error "debug enable"
#endif

int main(){
  int x,y,sum;
  printf("Wnter 2 number:");
  scanf("%d %d",&x,&y);
  #ifdef debug_print
    printf(" x: %d y: %d\n",x,y);
  #endif
    sum  = x+y;
    printf("sum %d",sum);
    return 0

}
/*
//with error when define
gowtham@GowthamKR:~/cprogram/classwork/preprocessor/24.08.2026$ gcc headerfiles.c -E -P
headerfiles.c:201:2: error: #error "debug enable"
  201 | #error "debug enable"
      |  ^~~~~
int main(){
  int x,y,sum;
  printf("Wnter 2 number:");
  scanf("%d %d",&x,&y);
    printf(" x: %d y: %d\n",x,y);
    sum = x+y;
    printf("sum %d",sum);
    return 0
}

without error define
gowtham@GowthamKR:~/cprogram/classwork/preprocessor/24.08.2026$ gcc headerfiles.c -E -P
int main(){
  int x,y,sum;
  printf("Wnter 2 number:");
  scanf("%d %d",&x,&y);
    sum = x+y;
    printf("sum %d",sum);
    return 0
}
gowtham@GowthamKR:~/cprogram/classwork/preprocessor/24.08.2026$ 
*/

#endif


#if 0
#include<stdio.h>
int main(){
    #line 100 "gowtham.c" //use to change the line number and file name
      printf("FILE %s ,LINE %d\n",__FILE__,__LINE__);



      printf("FILE %s ,LINE %d\n",__FILE__,__LINE__);

        return 0;
}


#endif





