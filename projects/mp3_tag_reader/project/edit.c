#include"reader.h"

void edit(char *tag,char *content){
  FILE *fp,*cp;
  fp = fopen("sample.mp3","r");
  cp = fopen("Sample.mp3","w");
  
  //error detuction
  if(fp ==  NULL || cp == NULL){
    perror("Error: ");
    return;
  }

  char header[11];
  fread(header,1,10,fp);
  if (strncmp(header,"ID3",3) !=0 ){
    printf("Not a mp3 file");
    return;

  }

  fwrite(header,1,10,cp);

 // convert tag into form header
  char ntag[5];//new tag
  if(strcmp(tag,"-a") == 0){
    strcpy(ntag,"TIT2");
  }else if(strcmp(tag,"-t") == 0){
    strcpy(ntag,"TPE1");
  }else if(strcmp(tag,"-A") == 0){
    strcpy(ntag,"TALB");
  }else if(strcmp(tag,"-y") == 0){
    strcpy(ntag,"TYER");
 }else if(strcmp(tag,"-m") == 0){
    strcpy(ntag,"TCON");
  }else if(strcmp(tag,"-c") == 0){
    strcpy(ntag,"COMM");
  }
  // printf("%s\n",ntag);

  for(int i=0;i<6;i++){
  //read form tag from file
  char ftag[5];
  fread(ftag,1,4,fp);
  ftag[4] = '\0';
  if(strcmp(ntag,ftag) == 0){
    printf("Condition true\n");
    // fwrite()
    fwrite(ftag,1,4,cp);

    //read size from file for move file pointer to read next content
    int size;
    fread(&size,sizeof(int),1,fp);
   // fwrite(&size,sizeof(int),1,cp);
    numreverse(&size);


    int nsize = strlen(content);
    numreverse(&nsize);
    fwrite(&nsize,sizeof(int),1,cp);//write new size to file

    //read and write flag
    char flag[3];
    fread(flag,1,3,fp);
    fwrite(flag,1,3,cp);



    // read the content of file
    char buffer[size];
    fread(buffer,1,size-1,fp);
    //printf("%s\n",buffer);

   fwrite(content,1,size-1,cp); //write the content to file

    printf("Write new content\n");
    break;

  }else{
    printf("Condition false\n");
    fwrite(ftag,1,4,cp);

    //read size from file
    int size;
    fread(&size,sizeof(int),1,fp);
    fwrite(&size,sizeof(int),1,cp);
    numreverse(&size);
    printf("%d\n",size);

    //read and write flag
    char flag[3];
    fread(flag,1,3,fp);
    fwrite(flag,1,3,cp);

    // read the content of file
    char buffer[size];
    fread(buffer,1,size-1,fp);
    printf("%s\n",buffer);
    fwrite(buffer,1,size-1,cp);



  }
}




//  puts("condition complete");

  char ch;
  while( fread(&ch,sizeof(char),1,fp)){
   fwrite(&ch,sizeof(char),1,cp);
  }


fcloseall();


}























//   char header[13];
//   fread(header,1,10,fp);
//   // printf("%ld",strlen(header));
//   fwrite(header,10,1,cp);




//   //convert help into tags
//   char ntag[5];//new tag
//   if(strcmp(tag,"-a") == 0){
//     strcpy(ntag,"TIT2");
//   }else if(strcmp(tag,"-t") == 0){
//     strcpy(ntag,"TPE1");
//   }else if(strcmp(tag,"-A") == 0){
//     strcpy(ntag,"TALB");
//   }else if(strcmp(tag,"-y") == 0){
//     strcpy(ntag,"TYER");
//  }else if(strcmp(tag,"-m") == 0){
//     strcpy(ntag,"TCON");
//   }else if(strcmp(tag,"-c") == 0){
//     strcpy(ntag,"COMM");
//   }
// for(int i=0;i<6;i++){
//   char ftag[5];
//   fread(ftag,4,1,fp);
//   ftag[4] = '\0';
//   if(strcmp(ftag,ntag) ==0){
//     printf("Execute true\n");
//     fwrite(ftag,4,1,cp);
//     int size;
//     fread(&size,sizeof(int),1,fp);
//     numreverse(&size);
//     printf("%d\n",size);
//     int nsize =strlen(content);//need t fetch a new size
//     int backup =nsize;
//     printf("Content size after convert: %d\n",nsize);
//     numreverse(&nsize);
//     printf("Content size after convert: %d\n",nsize);
//     fwrite(&nsize,sizeof(int),1,cp);
//     //copy the flag
//     char flag[4];
//     fread(flag,1,3,fp);
//     fwrite(flag,1,3,cp);
//     char buffer[size];
//     fread(buffer,1,size-1,fp);
//     fwrite(content,1,backup,cp);
//     break;
//   }
//   else{
//     printf("Execution false\n");
//      fwrite(ftag,4,1,cp);
//      int size;
//      fread(&size,sizeof(int),1,fp);
//      fwrite(&size,sizeof(int),1,cp);
//      numreverse(&size);
//      //flag and null
//      char flag[4];
//      fread(flag,1,3,fp);
//      fwrite(flag,1,3,cp);
//      char buffer[size];
//      fread(buffer,1,size-1,fp);
//      fwrite(buffer,1,size-1,cp);
//   }

// }

 






















// ==================================
//   if(strcmp(ftag,ntag)==0 ){
//      printf("Execute true\n");

//     //write tag to sample file
//     fwrite(ftag,1,4,cp);

//     //change size
//     //move file pointer to next tag
//     int size;
//     fread(&size,sizeof(int),1,fp);
//     printf(" after read size : %d\n",size);
//     // fwrite(&size,sizeof(int),1,cp);
//     numreverse(&size);
//     printf("after convert size : %d\n",size);


//     //change the size
//     int csize =strlen(content); //newsize
//     int bsize = csize;//backup size
//     numreverse(&csize);
//     fwrite(&csize,sizeof(int),1,cp);

//     //read flag
//     char flag[4];
//     fread(flag,1,3,fp);
//     fwrite(flag,1,3,cp);

//     char buffer[size];
//     fread(buffer,size-1,1,fp);
//     fseek(fp,-1,SEEK_CUR);
//     //write the new content to file
//     fwrite(content,bsize,1,cp);
//     // 
//     char ch;
// 	  while(ch = (fgetc(fp) != EOF))
//     {
// 		 fputc(ch,cp);
//     }

//   }else{
//     printf("False \n");

//     //write tag into file
//     fwrite(ftag,1,4,cp);

//     // printf("tag: %s\n",ftag);

//     //read size
//     int size;
//     fread(&size,sizeof(int),1,fp);
//     printf(" after read size : %d\n",size);
//     fwrite(&size,sizeof(int),1,cp);
//     numreverse(&size);
//     printf("after convert size : %d\n",size);


//     //read flag
//     char flag[4];
//     fread(flag,1,3,fp);
//     fwrite(flag,1,3,cp);

//     //read content
//     char buffer[size];
//     fread(buffer,size-1,1,fp);
//     // printf("content: %s\n",buffer);
//     fwrite(buffer,size-1,1,cp);
//     char ch;
// 	  while(ch = (fgetc(fp) != EOF))
//     {
// 		 fputc(ch,cp);
//     fputc(ch,stdout);
     
//     }



//   }
  



// fcloseall();
// }




// /*
//   size_t fread(void ptr[restrict .size * .nmemb], size_t size, size_t nmemb,  FILE *restrict stream);
//   size_t fwrite(const void ptr[restrict .size * .nmemb], size_t size, size_t nmemb, FILE *restrict stream);
// */

// // int cedit =0; //flag for edit complete444  // ftag where need to write 
//         // size of each element
//         //number of element
//         //fp where need to tage
//         // printf("%s\n", ftag);

