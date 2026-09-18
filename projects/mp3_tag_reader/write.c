#include <stdio.h>
#include <stdlib.h>

void numreverse(int * ptr){
  unsigned char * byte = (unsigned char *)ptr;
  int left = 0, right = sizeof(int)-1;
    unsigned char temp;
    while (left < right) {
        temp = byte[left];
        byte[left] = byte[right];
        byte[right] = temp;
        right--;
        left++;
    }
}


int main() {
    FILE *src = fopen("/home/gowtham/cprogram/projects/mp3_tag_reader/project/backup.mp3", "r");
    if (!src) {
        perror("Error opening source file");
        return 1;
    }

    FILE *dest = fopen("song_copy.mp3", "w");
    if (!dest) {
        perror("Error opening destination file");
        fclose(src);
        return 1;
    }

    int ch;
    long count = 0;
      char header[13];
  fread(header,1,10,src);
  // printf("%ld",strlen(header));
  fwrite(header,10,1,dest);
  
   char ftag[5];
  fread(ftag,4,1,src);
  ftag[4] = '\0';

   fwrite(ftag,1,4,dest);

    // printf("tag: %s\n",ftag);

    //read size
    int size;
    fread(&size,sizeof(int),1,src);
    printf(" after read size : %d\n",size);
    fwrite(&size,sizeof(int),1,dest);
    numreverse(&size);
    printf("after convert size : %d\n",size);


    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
        count++;
    }

    fclose(src);
    fclose(dest);

    printf("Copied %ld bytes from song.mp3 to song_copy.mp3\n", count);
    return 0;
}