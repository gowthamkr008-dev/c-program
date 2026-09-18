#include<stdio.h>


#if 0
int main(){
	int x,y;
	for(x=0,y=0;x<10,y<5;x++,y++){
		printf("x: %d y: %d ",x,y);
	}
return 0;
}
/*
 x: 0 y: 0
x: 1 y: 1
x: 2 y: 2 
x: 3 y: 3
x: 4 y: 4
 */
#endif




#if 10
int main(){
        int x,y;
        for(x=0,y=0;x<5,y<10;x++,y++){
                printf("x: %d y: %d\n ",x,y);
        }
return 0;
}
/*
 *x: 0 y: 0
 x: 1 y: 1
 x: 2 y: 2
 x: 3 y: 3
 x: 4 y: 4
 x: 5 y: 5
 x: 6 y: 6
 x: 7 y: 7
 x: 8 y: 8
 x: 9 y: 9

 */
#endif




