#include<stdio.h>
#if 1
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











