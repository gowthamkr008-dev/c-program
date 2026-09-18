#include<stdio.h>

#if 0
int main(){
	int res;
	res = (7-4)*3/2+5;
	printf("%d",res);
	return 0;
}

//
#endif


#if 0
int main(){
	int res;
	res = 7-4*3/2+5;
	printf("%d",res);
	return 0;
}

//o/p = 6
#endif

#if 0
int main(){
	int num=5;
	printf("%zu:%zu:%zu\n",sizeof (int),sizeof num ,sizeof 5);

	//printf("%d",res);
	return 0;
}

//o/p = 4:4:4
#endif



#if 0
int main(){
	float num1=5;
	int num2 =sizeof(++num1);
	printf("num1:%f,num2:%d\n",num1,num2);

	//printf("%d",res);
	return 0;
}

//o/p = 4:4:4
#endif




#if 1
int main(){
	char ch1 ='x',ch2='y',ch3 = 'z';

	printf("  %zu\n %zu\n %zu\n %zu\n",sizeof(ch1),sizeof(-ch1),sizeof('x'),sizeof(-'x'));
	printf("%zu\n %zu\n %zu\n %zu\n",sizeof(char),sizeof(int),sizeof(float),sizeof(double));
return 0;
}
#endif


























