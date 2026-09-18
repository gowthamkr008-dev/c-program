#include"reader.h"

void edit_content(char *tag,char *content,char *fname){
  FILE *fp,*cp;
  fp = fopen(fname,"r");                                         //open editable file
  cp = fopen("Sample.mp3","w");                             
  if(fp ==  NULL || cp == NULL)
  { 
    print_line(30);
    perror("Error ❌");
    print_line(30);                                              //error detuction
   
    return;
  }
  char header[11];                                              //read a header file
  fread(header,1,10,fp);
  if (strncmp(header,"ID3",3) !=0 )
  {                                                            //valid file or not
    printf("Not a mp3 file");
    return;
  }
  fwrite(header,1,10,cp);                                        //copy heder to new file

                                                                 // convert tag into form header
  char ntag[5];                                                  //new tag                          
  if(strcmp(tag,"-a") == 0)
  {
    strcpy(ntag,"TIT2");
  }else if(strcmp(tag,"-t") == 0)
  {
    strcpy(ntag,"TPE1");
  }else if(strcmp(tag,"-A") == 0)
  {
    strcpy(ntag,"TALB");
  }else if(strcmp(tag,"-y") == 0)
  {
    strcpy(ntag,"TYER");
 }else if(strcmp(tag,"-m") == 0)
 {
    strcpy(ntag,"TCON");
  }else if(strcmp(tag,"-c") == 0)
  {
    strcpy(ntag,"COMM");
  }else
  {
     print_line(60);
  printf("%20s %s"," ","Invalid tag ❌\n");
  printf("1. '-t' -> edit artist name\n2. '-a' -> edit song name\n3. '-A' -> edit album name\n4. '-m' -> edit content type\n4. '-y' -> edit the year\n5. '-c' -> edit Language");

    print_line(60);
    
    return ;
  }


  for(int i = 0;i < 6; i++)
  {
    char ftag[5];                                               //read tag from file
    fread(ftag,1,4,fp);
    ftag[4] = '\0';
    if(strcmp(ntag,ftag) == 0)                                  //compare the user given tag and file tag same or not
    {                                                            //true get inside the blick
     
      fwrite(ftag,1,4,cp);                                                                         

      int size;
                                                              //in file pointer move the next pointer use 
      fread(&size,sizeof(int),1,fp);
      num_reverse(&size);


      int nsize = strlen(content); 
      nsize+=1;                                                //new size from lengthe new content
      int backup =nsize;
      num_reverse(&nsize);                                     //reverse the number to convert little endian to big endian
      fwrite(&nsize,sizeof(int),1,cp);                        //write new size to file
     
                                                              //read and write flag
      char flag[3];
      fread(flag,1,3,fp);
      fwrite(flag,1,3,cp);

                                                                 // read the content of file to move the file pointer to next readed tag
      char buffer[size];
      fread(buffer,1,size-1,fp);
      
      fwrite(content,1,strlen(content),cp);                        //write the new content to file
     
      break;
    }else
    {                                                           //the comparision of that tag is false 
                                                               //read and write until next tag find
    
    fwrite(ftag,1,4,cp);
   
    int size;
   
    fread(&size,sizeof(int),1,fp);
    fwrite(&size,sizeof(int),1,cp);
    num_reverse(&size);
  
  
    char flag[3];
    fread(flag,1,3,fp);
    fwrite(flag,1,3,cp);

    // read the content of file
    char buffer[size];
    fread(buffer,1,size-1,fp);
    fwrite(buffer,1,size-1,cp);
  }
}                                                               //the tag only in starting after header only 6 tag we are going to edit so use that loop only check 6 times
  char ch;                                                     //read and write the content until EOF find                                      
  while( fread(&ch,sizeof(char),1,fp))
  {
     fwrite(&ch,sizeof(char),1,cp);
  }
  
  print_line(80);
  printf("%25s %s"," ","Content Edit Succesfully ✅");
  print_line(80); 

                    
  remove(fname);                                                 //remove and rename the new file
  rename("Sample.mp3",fname);
  fcloseall();
}


  /*
-a TIT2: Sunny Sunny - Yo Yo Honey Singh - [SongsPk.CC]
→ Song title / track name (the name of the song).

-t TPE1: Yo Yo Honey Singh - [SongsPk.CC]
→ Lead artist / performer (main artist name).

-A TALB: Yaariyan
→ Album title (the album or soundtrack the song is from).

-y TYER: 2013
→ Year (release/recording year of the track or album).

-m TCON: Bollywood Music - [SongsPk.CC]
→ Genre / content type .

-c COMM: eng
→ language is English 
  
  */

