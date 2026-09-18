#if 0

#include<stdio.h>
int main(){

	int iter;
	for(iter = 0; iter < 10; iter++)
	{
		printf("looped %d times \n", iter);
	}
	
	return 0;


}

o/p of this program
looped 0 times
looped 1 times
looped 2 times
looped 3 times
looped 4 times
looped 5 times
looped 6 times
looped 7 times
looped 8 times
looped 9 times


#endif
#if 0
#include<stdio.h>
int main(){

	int iter;
	for(iter = 0; iter < 10; iter++);
	{
		printf("looped %d times \n", iter);
	}	
	return 0;
}
//o/p is print the one times   
//looped 10 times
#endif



#if 0
#include<stdio.h>
int main(){

        int iter=0;
        for(; iter < 10; )
        {
                printf("looped %d times \n", iter);
		iter++;
        }
        return 0;
}
//looped 0 times
/*looped 1 times
looped 2 times
looped 3 times
looped 4 times
looped 5 times
looped 6 times
looped 7 times
looped 8 times
looped 9 times
*/
#endif




#if 0
#include<stdio.h>
int main(){

        int iter=0;
        for(; ; );
        {
                printf("looped %d times \n", iter);
		iter++;
        }
        return 0;
}

/*
 not print anything it empty
 */
#endif



#if 0
#include<stdio.h>
int main(){

        int iter=0;
        for(; ; ;)
        {
                printf("looped %d times \n", iter);
		iter++;
        }
        return 0;
}

/*
 for.c:101:17: error: expected expression before ‘;’ token
  101 |         for(; ; ;)
 */
#endif



#if 0
#include<stdio.h>
int main(){

        int iter=0;
        for(;iter<10;)
        printf("looped %d times \n", iter);
		iter++;
       
        return 0;
}

/*
 we don't put this bracket"{}"
 after this loop it takes only one line inside the loop

infinite time print the  
 
looped 0 times
 
 */
#endif





#if 0
#include<stdio.h>
int main(){

        int iter=0;
        for(;iter<10;)
        printf("looped %d times \n", iter++);

        return 0;
}

/*looped 0 times
looped 1 times
looped 2 times
looped 3 times
looped 4 times
looped 5 times
looped 6 times
looped 7 times
looped 8 times
looped 9 times
 */
#endif





#if 0
#include<stdio.h>
int main(){

        int iter;
        for(iter=-1;iter<10;iter++){
        printf("hello\n");
	}

        return 0;
}

/*
 hello
hello
hello
hello
hello
hello
hello
hello
hello
hello
hello
 */
#endif





#if 1
#include<stdio.h>
int main(){

        int iter;
        for(iter = -1; iter < sizeof (int); iter++){//sizeof operator give unsigned value
						    //signed value converted into big value
						    //do the higher priority 
						    //-1 signed and 4 signed
        printf("hello\n");
        }

        return 0;
}

/*
nothing is print the o/p
 */
#endif
