#if 1

#include<stdio.h>
int main(){
	char ch;
	printf("Enter the character:");
	scanf("%c",&ch);
	switch (ch)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'I':
		case 'i':
		case 'O':
		case 'o':
		case 'U':
		case 'u':
			printf("%c\n is vowel",ch);
			break;
		default:
			printf("%c\n is not vowels",ch);
	}
	return 0;
}
#endif


