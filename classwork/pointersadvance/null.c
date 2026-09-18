#include<stdio.h>

#if 0
int main(){
	int *ptr = NULL;
	*ptr = 123;
	return 0;
}
#endif

#if 0
int main(){
	int *ptr = NULL;
	int *ptr = 0;
	int *ptr = (void*)0;
	printf("%d\n",*ptr);
	return 0;
}
#endif

#if 0
int main(){
	int num =0;
	scanf("%d",&num); //after reading the value to stroe the &num addressor num
	printf("%d\n",num);
	/*
	int *ptr = NULL;
	*ptr = 123;
	*/
	return 0;
}
#endif

#if 0
int main(){
	int num;
	scanf("%d",num);// try to store the value in address of 0 lead to segmentation fault
	printf("%d\n",num);
	/*
	int *ptr = NULL;
	*ptr = 123;
	*/
	return 0;
}
#endif

#if 0
int main(){
	void *ptr;
	//void num;//error
	printf("%zu\n",sizeof(ptr));//8
	printf("%zu\n",sizeof(void *)); //8
	printf("%zu\n",sizeof(void));//1
}


#endif


#if 0

#include <stdio.h>
int main()
{
double x = 7.2;
void *vptr = &x;
printf("%hhx\n", *(char *)vptr);//cd
printf("%hhx\n", *(char *)(vptr + 7));//40
printf("%hx\n", *(short *)(vptr + 3));//cccc
printf("%x\n", *(int *)(vptr + 0));//cccccccd
return 0;
}

/*




*/
#endif


#if 0
void swap(void *first,void*second ,int size){
	
	
	char temp;
	int i;
	for(i=0;i<size;i++){
	temp = *(char *)first;
	*(char *)first =*(char *)second;
	*(char *)second = temp;
	first++;
	second++;
	}
	
}


int main(){
	int a=10,b=20;
	printf("before: ");
	printf("%d %d\n",a,b);
	swap(&a,&b,sizeof(int));
	printf("after: ");
	printf("%d %d\n",a,b);
	
	printf("\n");
	
	
	char ch1 ='A',ch2 = 'B';
	printf("before: ");
	printf("%c %c\n",ch1,ch2);
	swap(&ch1,&ch2,sizeof(char));
	printf("after: ");
	printf("%c %c\n",ch1,ch2);
	
	printf("\n");
		
	double d1 = 123.1234,d2 =890.1231;
	printf("before: ");
	printf("%f %f\n",d1,d2);
	swap(&d1,&d2,sizeof(double));
	printf("after: ");
	printf("%f %f\n",d1,d2);
		
	printf("\n");
	
	int arr[3] = {12, 23, 24},brr[3] = {98, 76, 54};
	printf("before: \n");
	printf("arr : %d %d %d \n",arr[0],arr[1],arr[2]);
		printf("brr : %d %d %d \n",brr[0],brr[1],brr[2]);
		
	printf("\n");
		swap(arr,brr,sizeof(arr));
		printf("after: \n");
		printf("arr : %d %d %d \n",arr[0],arr[1],arr[2]);
		printf("brr : %d %d %d \n",brr[0],brr[1],brr[2]);
		
		
		
		
		char str[10] ="hello";
		char cpstr[10] ="world";
		printf("before: %s\n",str);
		printf("before: %s\n",cpstr);
		swap(str,cpstr,sizeof(str));
		
		printf("after: %s\n",str);
		printf("before: %s\n",cpstr);
		
return 0;
}	

/*
before: 10 20
after: 20 10

before: A B
after: B A

before: 123.123400 890.123100
after: 890.123100 123.123400

before:
arr : 12 23 24
brr : 98 76 54

after:
arr : 98 76 54
brr : 12 23 24


*/



#endif

#if 0
void foo(void *num){
		printf("%c\n",*(char *)num);
}

int main(){
	int num =12345678;
	foo(&num);
	return 0;
}

#endif

#if 0


int main(){
	int num;
	
	void *ptr =&num;
	scanf("%d",(int *)ptr);
	printf("num : %d",*(int *)ptr);
	return 0;
	
}



#endif	


#if 0

int main(){
	int num[10];
	
	void *ptr =num;
	for(int i=0;i<10;i++){
	//scanf("%d",(int *)ptr+i);
	scanf("%d", &((int *) ptr)[i]);
	}
	for(int i=0;i<10;i++){
	printf("%d,",*((int *)ptr+i));
	}
	return 0;
}

#endif







#if 1
void swap(void *first,void*second ,int size){
	
	
	//char temp;
	int i,valid =0;
	for(i=0;i<size;i++){
	//*(char *)first =*(char *)second++;//copy the second to first
	if(*(char *)first++ == *(char *)second++)//conpare the two 
	{
	 valid =1;
	}else{
		valid =0;
		break;
	}
	
		}
		if(valid ==1){
			printf("all are equal\n");
			
		}else{
			printf("not all are equal\n");
			
		}
	
}
int main(){
	char a[10] ="hello",b[10] ="hello";
	printf("%s\n%s\n",a,b);
	swap(&a,&b,sizeof(int));	
}
#endif







































