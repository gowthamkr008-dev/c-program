#if 0 

#include<stdio.h>
int main(){
	char option;
	int age;
	float height;

	scanf("%c", &option);
	printf("the character is : %c\n" ,option);
	scanf("%d",&age);
	printf("the age is  : %d\n",age);
	scanf("%f",&height);
	printf("the height is : %f\n",height);
	return 0;
}
#endif


#if 0
##include<stdio.h>
int main(){
	char option;
	int age;
	float height;

	scanf("%c", &option);
	printf("the character is : %c\n" ,option);
	scanf("%d",&age);
	printf("the age is  : %d\n",age);
	scanf("%f",&height);
	printf("the height is : %f\n",height);
	return 0;
}
#endif


#if 0
#include<stdio.h>
int main(){
	char option;
	int age;
	float height;

	scanf("%d", &age);
	printf("the integer is : %d\n" ,age);
        scanf(" %c", &option);
	printf("the character is  : %c\n" ,option);
	scanf("%f",&height);
	printf("the float is : %f\n",height);
	return 0;
}
#endif
#if 0

#include<stdio.h>
int main(){
        char option;
        int age;
        float height;

        scanf("%d", &age);
        printf("the integer is : %d\n" ,age);
	getchar();      
      	scanf("%c", &option);
        printf("the character is  : %c\n" ,option);
        scanf("%f",&height);
        printf("the float is : %f\n",height);
        return 0;
}

#endif

#if 1

#include<stdio.h>
int main(){
        char option = 'A';
        int age =23;
        float height =1.533;
	
	printf("sizeof char is %u\n",sizeof(char));
	printf("size of int is %u\n", sizeof(int));
	printf("size of float is %u\n",sizeof(float));


	
	printf("sizeof char is %u\n",sizeof(option));
	printf("size of int is %u\n", sizeof(age));
	printf("size of float is %u\n",sizeof(height));

	 printf("sizeof char is %u\n",sizeof('A'));
        printf("size of int is %u\n", sizeof(23));
        printf("size of float is %u\n",sizeof(1.53312345));
	
	return 0;
}


#endif
