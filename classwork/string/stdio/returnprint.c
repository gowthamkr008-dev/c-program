#include<stdio.h>
#if 0
int main(){
	int num;
	char str[] = "hello world";
	num = printf("%s\n",str);
	printf("return value is the printed %d\n",num);
	//print how many character print int the before print return 
	return 0;
}

//hello world
//return value is the printed 12
#endif

#if 0
int main(){
	int num;
	char str[] = "hello world";
	num = printf("%s",str);
	printf("return value is the printed %d\n",num);
	//print how many character print int the before print return 
	return 0;
}
//hello worldreturn value is the printed 11
#endif



#if 0
int main(){

	printf("%d\n",printf("%s","hello world"));
	//print how many character print int the before print return 
	return 0;
}
//hello world11
#endif


#if 0
int main(){

	printf("%d %d",printf("world\n"),printf("hello\n"));
	//print how many character print int the before print return 
	return 0;
}
/*
hello
world
6 6
*/

#endif

#if 0
int main(){
	if(!printf("hello ")){//condition is compulsary
		printf("hello");
	}else{
		printf("world\n");
	}
	return 0;
}

/*
hello world
*/
#endif


#if 1
int main(){

	printf("hello emertxe\rworld gowtham\n");
	return 0;
}


#endif































