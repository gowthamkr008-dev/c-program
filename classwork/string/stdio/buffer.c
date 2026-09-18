#include<stdio.h>
#include<unistd.h>
#if 0
int main(){
	printf("hello");
	//return 0;
	
}


#endif
#if 0
int main(){
	while(1){
	printf("hello");
	
	sleep(1);
	}
return 0;
	
}
//wait until buffer full
#endif

#if 0
int main(){
	while(1){
	printf("hello");
	fflush(stdout);
	sleep(1);
	}
return 0;
	
}


#endif
#if 0
int main(){
	int num;
	while(1){
	printf("Enter the number: ");
	scanf("%d",&num);
	sleep(1);
	}
	return 0;
	
}

#endif
#if 0

int main(){
	while(1){
	printf("hello\n");
	sleep(1);
	}
	//return 0;
	
}

#endif
#if 0


#endif
#if 0
//disabling the buffer using setbuff
int main(){
	char ch[] = "hello";
	setbuf(stdout,NULL);//diabling the buffer using the setbuf
	while(1){
		printf("%s",ch);
		sleep(1);
	} 
	return 0;
}

#endif
#if 0
int main(){
	char ch ='y';
	printf("Entr the string:\n");
	while(1){
		scanf("%c",&ch);
		getchar();//discard only one char
		printf("%c\n",ch);
	}
}

#endif
#if 0
int main(){
	char ch ='y';
	printf("Entr the string:\n");
	while(1){
		scanf("%c",&ch);
		while(getchar() != EOF);
		printf("%c\n",ch);
	}
}

//read only one char other discarded

#endif
#if 1
int main(){
	while(1){
		fprintf(stdout,"hello");//after a set of min
		fprintf(stderr,"world");
		sleep(1);
	}
	return 0;
}

#endif
#if 1


#endif
#if 1


#endif
#if 1


#endif

























