 #include"reader.h"

 void view(){
 
 FILE *fp = fopen("backup.mp3","r");
  if(fp == NULL){
      perror("Error");
      return;
  }
  char tag[5];
  fread(tag,1,3,fp);
  tag[3] = '\0';
  // printf("%s\n",tag);
  if(strcmp(tag,"ID3") == 0){
    fseek(fp,7,SEEK_CUR);

     char title[30];
  

    for(int i=0;i<6;i++){

      //tag
      char head[5];//read tag
      fread(head,4,1,fp);
      head[4] = '\0';

      //convert tag into specific meaning

  if(strcmp(head,"TPE1") == 0)
  {
    strcpy(title,"Artist name");
  }
  else if(strcmp(head,"TIT2") == 0)
  {
    strcpy(title,"Title / Song name");
  }
  else if(strcmp(head,"TALB") == 0)
  {
    strcpy(title,"Album");
  }
  else if(strcmp(head,"TYER") == 0)
  {
    strcpy(title,"Year");
  }
  else if(strcmp(head,"TCON") == 0)
  {
    strcpy(title,"Content type");
  }
  else if(strcmp(head,"COMM") == 0)
  {
        strcpy(title,"Language");
  }
  


  /*
  TIT2: Sunny Sunny - Yo Yo Honey Singh - [SongsPk.CC]
→ Song title / track name (the name of the song).

TPE1: Yo Yo Honey Singh - [SongsPk.CC]
→ Lead artist / performer (main artist name).

TALB: Yaariyan
→ Album title (the album or soundtrack the song is from).

TYER: 2013
→ Year (release/recording year of the track or album).

TCON: Bollywood Music - [SongsPk.CC]
→ Genre / content type .
COMM: eng
→ language is English 
  
  */


  //read size of content
      int size;
      fread(&size,sizeof(int),1,fp);
      numreverse(&size);
     

   
      //read the content
      fseek(fp,3,SEEK_CUR);

      char buffer[size];
      fread(buffer,size-1,1,fp);

  printf("%-30s:  %s \n",title,buffer);
  
    }
       print(80);
    fclose(fp);
  }else{
    printf("Invalid Format\n");
    return;
  }}