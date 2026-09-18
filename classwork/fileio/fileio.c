#include<stdio.h>

#if 0
int main(){
	FILE *fp;
	fp = fopen("new.txt","r");
	fclose(fp);
	return 0;
}
//file is not present fp return null
//accessing of null lead to sugmentation fault
//null is a part of the kernal

#endif

#if 0
int main(){
	FILE *fp;
	fp = fopen("new.txt","r");
	if(fp == NULL){
		//throw error automatically without using printf	
		perror("Error");//Error: No such file or directory
		return -1;
	}
	fclose(fp);
	return 0;
}

/*
Error: No such file or directory
*/
#endif

#if 1
int main(){
	FILE *fp;
	fp = fopen("new.txt","w");
	if(fp == NULL){
		//throw error automatically without using printf	
		perror("Error");//Error: No such file or directory
		return -1;
	}
	fclose(fp);
	return 0;
}

/*
Error: No such file or directory
*/
#endif
#if 0
int main(){
	FILE *fp;
	fp = fopen("new.txt","a");
	if(fp == NULL){
		//throw error automatically without using printf	
		perror("Error");//Error: No such file or directory
		return -1;
	}
	fclose(fp);
	return 0;
}
/*
gowtham@GowthamKR:~/cprogram/classwork/fileio$ cat new.txt
gowtham@GowthamKR:~/cprogram/classwork/fileio$ vi new.txt
gowtham@GowthamKR:~/cprogram/classwork/fileio$ cat new.txt
asdfvbnmjhtrsz bnjuytredszxcvbnmkuyresx

gowtham@GowthamKR:~/cprogram/classwork/fileio$ ./a.out
gowtham@GowthamKR:~/cprogram/classwork/fileio$ cat new.txt
asdfvbnmjhtrsz bnjuytredszxcvbnmkuyresx

gowtham@GowthamKR:~/cprogram/classwork/fileio$

*/

#endif
