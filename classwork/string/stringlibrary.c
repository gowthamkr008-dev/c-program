#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#if 0
int main(){
	char str1[] = "gowtham";
	char str2[] = "gowtham";
	int status;
	
	status = strcmp(str1,str2);
	if(status ==0){
		 printf("same string %d\n",status);
	}else{
	   printf("different string %d\n",status);
	}
	
	
	
	
	return 0;
}

/*
same string 0
*/
#endif


#if 0
int main(){
	char str1[] = "gowtham";
	char str2[] = "Gowtham";
	int status;
	
	status = strcmp(str1,str2);
	if(status ==0){
		 printf("same string %d\n",status);
	}else{
	   printf("different string %d\n",status);
	}
	
	
	
	
	return 0;
}

/*
different string 32
return the different 
h -H
104-72
32


*/
#endif



#if 0
int main(){
	char str1[] = "hello";
	char str2[] = "hello world";
	int status;
	
	status = strcmp(str1,str2);
	if(status ==0){
		 printf("same string %d\n",status);
	}else{
	   printf("different string %d\n",status);
	}
	
	
	
	
	return 0;
}

/*
different string -32

*/
#endif


#if 0
int main(){
	char str1[] = "gowtham";
	char str2[] = "GOWTHAM";
	int status;
	
	status = strcasecmp(str1,str2);
	//compare two string ignore cases
	//case compare while doing the comparision upper case converted into lower case


	if(status ==0){
		 printf("same string %d\n",status);
	}else{
	   printf("different string %d\n",status);
	}
	
	
	
	
	return 0;
}

/*
same string 

*/
#endif


#if 0
int main(){
	char str1[] = "gowtham";
	char str2[] = "GlWTHAM";
	int status;
	
	status = strcasecmp(str1,str2);
	//compare two string ignore cases
	//case compare while doing the comparision upper case converted into lower case


	if(status ==0){
		 printf("same string %d\n",status);
	}else{
	   printf("different string %d\n",status);
	}
	
	
	
	
	return 0;
}

/*
different string 3

*/
#endif



#if 0
//compare n number of character
int main(){
	char str1[] = "hello world";
	char str2[] = "hello";
	int status;
	
	status = strncmp(str1,str2,5);
	//compare the character when the end of the bracket put the number it will comparer the theamuch character only
	//after thea character number has been ignoresd
	//compare n number of character in the given two string
	


	if(status ==0){
		 printf("same string %d\n",status);
	}else{
	   printf("different string %d\n",status);
	}
	
	
	
	
	return 0;
}

/*
different string 3

*/
#endif


#if 0
/*
copy the string 
*/
int main(){
	char str[] ="gowtham";
	char dest[30];
	printf("before dest %s\n",dest);
	strcpy(dest,str);
	//whatever the str inside copy to the dest string use the strcpy 
	printf("after dest %s\n",dest);
	return 0;
}
/*
before dest
after dest gowtham
*/
#endif


#if 0
/*
copy the string 
*/
int main(){
	char str[] ="gowtham";
	char *dest; 
	//char *dest = malloc(30); 
	printf("before dest %s\n",dest);
	strcpy(dest,str);
	//whatever the str inside copy to the dest string use the strcpy 
	printf("after dest %s\n",dest);
	return 0;
}
/*
before dest ��Uf��H��AWI��AVAUATSH��
Segmentation fault (core dumped)

destination is the some garbage the address
onlt tothe pointer can't do the string pointer.
*/
#endif


#if 0
int main(){
	char str[] ="gowtham";
	char dest[30] = "hi ";  
	printf("before dest %s\n",dest);
	strcat(dest,str);
	//whatever in the dest after the conconginate the str
    // dest = dest + str
    //joining the two string
	printf("after dest %s\n",dest);
	return 0;
}
/*
before dest hi
after dest hi gowtham
*/
#endif

#if 0
int main(){
	char str[] ="gowtham";
	char *dest = "hi ";  
	printf("before dest %s\n",dest);
	strcat(dest,str);
	//whatever in the dest after the conconginate the str
    // dest = dest + str
    //joining the two string
	printf("after dest %s\n",dest);
	return 0;

}
/*
before dest hi
Segmentation fault (core dumped)

code segment is read only it is not modifiable
dest seg is in the code segment
*/
#endif

#if 0
int main(){
	char main[] ="hi hello how are you ??";
	char sub[] = "hello";
	char *ptr;
	ptr = strstr(main,sub);
	//find the substring in the main string if it found return the founded address if not found return the null
		if(ptr == NULL){
		 printf("sub string not found");
		}else{
			printf("found : %s\n",ptr);
		}
	
		
	return 0;

}
/*
ptr contain where the string is found 

*/

/*
found : hello how are you ??
*/
#endif

#if 0
int main(){
	char main[] ="hi hello how are you ??";
	char sub[] = "lo ho";
	char *ptr;
	ptr = strstr(main,sub);
	//find the substring in the main string if it found return the founded address if not found return the null
		if(ptr == NULL){
		 printf("sub string not found");
		}else{
			printf("found : %s\n",ptr);
		}
	
		
	return 0;

}
/*
found : lo how are you ??
//it choul be an order or sequence
*/
#endif

#if 0
int main(){
	char main[] ="hi hello how are you ??";
	char sub[] = "loho";
	char *ptr;
	ptr = strstr(main,sub);
	//find the substring in the main string if it found return the founded address if not found return the null
		if(ptr == NULL){
		 printf("sub string not found");
		}else{
			printf("found : %s\n",ptr);
		}
	
		
	return 0;

}
/*
sub string not found
*/

#endif

#if 0
int main(){
	char main[] ="hi hello how are you ??";
	//char sub[] = "loho";
	char *ptr;
	ptr = strchr(main, 'l');
	//check the character is present or not if present return the address of the character is not return null
		if(ptr == NULL){
		 printf("sub string not found");
		}else{
			printf("found : %s\n",ptr);
		}
	
		
	return 0;

}
/*
found : llo how are you ??
*/

#endif
#if 1
int main(){
	char main[] ="hi hello how are you ??";
	//char sub[] = "loho";
	char *ptr;
	char *ptr1;
	ptr = strrchr(main, 'o');
	ptr1 = strchr(main, 'o');
	//when the last one where it present the return the address
		if(ptr == NULL){
		 printf("sub string not found");
		}else{
			printf("last found : %s\n",ptr);
		}
		if(ptr1 == NULL){
		 printf("sub string not found");
		}else{
			printf("first found : %s\n",ptr1);
		}
	
		
	return 0;

}
/*
last found : ou ??
first found : o how are you ??
//travel upto nul char
copy upto the null char

*/

#endif




