#if 0

1.Write a program to check whether a given character is a vowel or not using a switch case statement.


#include<stdio.h>
int main(){
	char vowls;
	printf("Enter a vowels: ");
	scanf("%c",&vowls);

	if(vowls=='A'||vowls=='E'||vowls=='I'||vowls=='O'||vowls=='U'||vowls=='a'||vowls=='e'||vowls=='i'||vowls=='o'||vowls=='u'){
		printf("Vowels");
	}else{
		printf("not vowels");
	}
	return 0;
}
#endif

#if 1

//2.Write a program to calculate x raised to the power y (x^y) using loops.

#include<stdio.h>
int main(){
        int x,y;
        printf("Enter the power value of x and y: ");
        scanf("%d%d",&x,&y);
        int result =1;
        for(int i=1; i<=y;i++){
                result *= x;
                printf("%d\n",result);
        }
        return 0;
}

#endif
