#include<stdio.h>
//padding 

#if 0
struct data{
  char c1;
  int d;
  char c2;
};
int main(){
  struct data d; 
  printf("%zu\n",sizeof(struct data));
  printf("%zu\n",sizeof(d));
  return 0;
}
#endif


#if 0
//to avoid structure padding
#pragma pack(1)
struct data{
  char c1;
  int d;
  char c2;
};
int main(){
  struct data d; 
  printf("%zu\n",sizeof(struct data));
  printf("%zu\n",sizeof(d));
  return 0;
}
#endif

#if 0
struct Nibble
{
unsigned char lower: 4;   //4 bits
unsigned char upper : 4; //4 bits

};
int main()
{
struct Nibble nibble;

printf("%zu\n", sizeof(nibble));
return 0;

}
#endif



#if 0
struct Nibble
{
unsigned  lower  : 4;   //by default unsigned is a integer  4
 unsigned  upper : 4;  // 4
                // : 4 use this know as bit filled

                //8bit can be used 

};
int main()
{
struct Nibble nibble;

printf("%zu\n", sizeof(nibble));
return 0;

}
#endif



#if 0
struct Nibble
{
unsigned  char lower  : 6;  // 2
 unsigned char  upper : 4;  
};
int main()
{
struct Nibble nibble;

printf("%zu\n", sizeof(nibble));
return 0;

}
#endif



#if 0
struct Nibble
{
unsigned  char lower  : 10;  // 2
 unsigned char  upper : 4;  
};
int main()
{
struct Nibble nibble;

printf("%zu\n", sizeof(nibble));
return 0;

}
/*
07.09.26.c:97:16: error: width of ‘lower’ exceeds its type
   97 | unsigned  char lower  : 10;  // 2
      |                ^~~~~
*/
#endif



#if 0
struct Nibble
{
  //can't use real datatype bit filled
unsigned  char lower  : 4;  // 2
 unsigned  upper : 4;  
};
int main()
{
struct Nibble nibble;

printf("%zu\n", sizeof(nibble));
return 0;

}
/*

*/
#endif


#if 0

struct Nibble
{
unsigned char lower: 4;   //4 bits
unsigned char upper : 4; //4 bits

};
int main()
{
struct Nibble nibble;


printf("%p\n", &nibble);
// printf("%p\n", &nibble.lower);
// printf("%p\n", &nibble.upper);
return 0;

}

/*
07.09.26.c: In function ‘main’:
07.09.26.c:152:16: error: cannot take address of bit-field ‘lower’
  152 | printf("%p\n", &nibble.lower);
      |                ^
07.09.26.c:153:16: error: cannot take address of bit-field ‘upper’
  153 | printf("%p\n", &nibble.upper);
      |                ^
*/
#endif


#if 1
struct Nibble
{
char lower : 4;
char upper : 4;
};
int main()
{
struct Nibble nibble;
nibble.upper = 0x0A;
nibble.lower = 0x02;
printf("%d\n", nibble.upper);//-6
printf("%d\n\n", nibble.lower);//2

printf("%#o\n", nibble.upper);//-6
printf("%#x\n", nibble.lower);

return 0;
}

/*
lo   = 0010  4 bit
up = 1010  4 bit
     signbit msb

     [1]0 1 0
1's   0 1 0 1
+1          1
---------------
      0 1 1 0 =   -6  

*/



#endif
