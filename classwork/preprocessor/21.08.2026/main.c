#include<stdio.h>

#if 0
int main(){
  printf("%s \n",__FILE__);// main.c
  printf("Was compiled on %s at %s\n",__DATE__,__TIME__);//Was compiled on Aug 21 2026 at 04:29:09
  printf("This print in function %s\n",__func__);//This print in function main
  printf("And linu num is :%d\n",__LINE__);//And linu num is :6

    return 0;
}y
Was compiled on Aug 21 2026 at 04:29:09
This print in function main
And linu num is :6
*/

#endif
#if 0
void foo(){
   printf("This print in function %s\n",__func__); // function are runtime entityes 
  printf("And linu num is :%d\n",__LINE__);//And linu num is :6

}
int main(){
  printf("%s \n",__FILE__);// main.c
  printf("Was compiled on %s at %s\n",__DATE__,__TIME__);//Was compiled on Aug 21 2026 at 04:29:09
  foo();
    return 0;
}
#endif
#if 0
#include <stdio.h>
#define SET_BIT(num, pos)  (num | (1 << pos))
int main(){
    printf("%d\n", 2 * SET_BIT(0, 2));
    return 0;
}
#endif

#if 0
#include <stdio.h>
#define SET_BIT(num, pos)  num | (1 << pos)
int main(){
    printf("%d\n", 2 * SET_BIT(0, 2));
    return 0;
}
#endif


#if 0
#define SQUARE(x) x * x

int main(){
    printf("SQUARE: %d\n",SQUARE(5));
}

// o/p = 11
#endif


#if 0
#define SQUARE(x)   x * x //macro
  //       3 + 2   3+2 * 3+2
int main(){
    printf("SQUARE: %d\n",SQUARE(3 + 2));
    //  printf("SQUARE: %d\n",3 + 2 * 3 + 2);
}

//  o/p = 11
#endif


#if 0
#define SQUARE(x)  ( x * x) //macro
  //       3 + 2   3+2 * 3+2
int main(){
    printf("SQUARE: %d\n",SQUARE(3 + 2));
    //  printf("SQUARE: %d\n",3 + 2 * 3 + 2);
}

//  o/p = 11
#endif



#if 0
#define SQUARE(x)  ( x) *( x) //macro
  //       3 + 2   (3+2) * (3+2)
int main(){
    printf("SQUARE: %d\n",SQUARE(3 + 2));
    //  printf("SQUARE: %d\n",3 + 2 * 3 + 2);
}
//  o/p = 25

#endif

#if 0
#include <stdio.h>
#define SWAP(a, b) \
  int temp = a;          \
  a = b;             \
  b = temp;          \

int main(){
  int n1 = 10, n2= 20;
  SWAP(n1, n2);
  printf("%d %d\n", n1, n2);
 SWAP(n1, n2);// throw error temp decleare two times 
  printf("%d %d\n", n1, n2);
  return 0;
}

#endif




#if 0
#define MACRO(x) #x
int main(){
  printf("%s\n",MACRO(gowtham));
  return 0;
}
 /*
 replace that macro

 int main(){
  printf("%s\n","gowtham");
  return 0;
}
  */
#endif