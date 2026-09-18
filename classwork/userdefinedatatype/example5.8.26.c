#include<stdio.h>
#if 0
int main(){
	char ch='A';
	printf("%c %d %o %x\n",ch,ch,ch,ch);
			//A 65 101 41

	printf("%1$c %1$d %1$o %1$x\n",ch);
			//A 65 101 41
	return 0;
	
}

#endif

#if 1
int main(){
	char opt='A';
	int age = 29;
	float height =85.9;
	printf("%c %d %f\n",opt,age,height);
	       //A 29 85.900002
	printf("%2$d %3$f %1$c\n",opt,age,height);
	      // 29 85.900002 A
}

#endif
