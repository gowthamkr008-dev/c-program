#include<stdio.h>
#include<string.h>

#if 0

int main(){
	char str[8];
	gets(str);
	printf("String : %s\n",str);
	return 0;
}
/*
gowtham@GowthamKR:~/cprogram/classwork/string$ ./a.out
gowtham
String : gowtham
gowtham@GowthamKR:~/cprogram/classwork/string$ ./a.out
gow
String : gow
gowtham@GowthamKR:~/cprogram/classwork/string$ ./a.out
goadadfsdf
String : goadadfsdf
*** stack smashing detected ***: terminated
Aborted (core dumped)
gowtham@GowthamKR:~/cprogram/classwork/string$
*/
#endif
#if 0

int main(){
	char str[8];
	fgets(str,8,stdin);
	printf("String : %s\n",str);
	return 0;
}
/*
gowtham@GowthamKR:~/cprogram/classwork/string$ gcc readstring.c
gowtham@GowthamKR:~/cprogram/classwork/string$ ./a.out
gowth
String : gowth

gowtham@GowthamKR:~/cprogram/classwork/string$ ./a.out
gowtham
String : gowtham
gowtham@GowthamKR:~/cprogram/classwork/string$ ./a.out
asdgfvwaerstdgfh
String : asdgfvw
gowtham@GowthamKR:~/cprogram/classwork/string$
*/
#endif



#if 0
int main(){
	char str[8];
	scanf("%5s",str);
	printf("String : %s\n",str);
	return 0;
}
/*
gowtham@GowthamKR:~/cprogram/classwork/string$ ./a.out
gowtham
String : gowth
gowtham@GowthamKR:~/cprogram/classwork/string$ ./a.out
gow
String : gow
gowtham@GowthamKR:~/cprogram/classwork/string$ ./a.out
SDSFdsfcg
String : SDSFd
gowtham@GowthamKR:~/cprogram/classwork/string$
*/


#endif


#if 1

int main(){
	char str[30];
	printf("Enter the string: ");
	scanf("%[^\n]",str);
	printf("string : %s\n",str);
	return 0;
}

/*
Enter the string: gowtham emertxe
string : gowtham emertxe
*/
#endif
