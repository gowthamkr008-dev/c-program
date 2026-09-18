#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if(argc>0){
    
	  char tag[10];
    	  char source[100];

    strcpy(tag, argv[1]);       // save "-a"
    strcpy(source, argv[2]);    // save "filename"

    printf("Tag: %s\n", tag);
    printf("Source file: %s\n", source);
    
    }
    return 0;
}
