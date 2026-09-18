#if 0


#include<stdio.h>
int main(){
	int iter=0;
	while(iter<5)
		printf("looped %d times\n",iter++);
	return 0;
}

/*
 looped 0 times
looped 1 times
looped 2 times
looped 3 times
looped 4 times
*/
#endif

#if 0


#include<stdio.h>
int main(){
        int iter=0;
        while(iter++ < 5)
                printf("looped %d times\n",iter);
        return 0;
}
/*
 looped 1 times
looped 2 times
looped 3 times
looped 4 times
looped 5 times

*/
#endif




#if 0


#include<stdio.h>
int main(){
        int iter=0;
        while(iter++ < 20)
                printf("looped %d times\n",iter++);
        
	printf("outside: %d\n",iter);
	return 0;
}
/*

looped 1 times
looped 3 times
looped 5 times
looped 7 times
looped 9 times
looped 11 times
looped 13 times
looped 15 times
looped 17 times
looped 19 times
outside: 21


compare the even value print the odd value
*/

#endif




#if 1


#include<stdio.h>
int main(){
        int iter=0;
        while(iter++ < 20)
                printf("looped %d times\n",++iter);

        printf("outside: %d\n",iter);
        return 0;
}
/*

looped 1 times
looped 3 times
looped 5 times
looped 7 times
looped 9 times
looped 11 times
looped 13 times
looped 15 times
looped 17 times
looped 19 times
outside: 21


compare the even value print the odd value
*/

#endif

