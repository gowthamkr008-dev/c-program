/*
name : K R GOWTHAM
project title : MP3 tag reader and Editor

This project work with the command line argument
  1 view the content of file
  2 edit the content
  3 help
    
  working command line argument
   ./a.out                     =   view help function
   ./a.out -v                  =   ask file name to view the content
   ./a.out -v filename.mp3     =   view the content of file
   ./a.out -e                  =   ask tag ,aontent,filename then call edit function
   ./a.out -e -c               =   ask content,filename then call function
   ./a.out -e -c filename.mp3  =   ask content then call edit function

   use function
      validate file 
      view content
      edit content
      // reverse the size of content
      print_line( = )

*/

#include"reader.h"                                                                                                 //header file
int main(int arg,char * argv[]){
  int ch; 
    print_line(50);
    printf("%-6s %s"," ","MP3 TAG READER AND EDITOR ");
    print_line(50);                                                                                                //clear the input buffer
  if(arg == 1){                                                                                                   //user give only ./a.out
    // printf("Open Help function\n");
    print_line(80);
    printf("Error : %s : INVALID ARGUMENTS\n\n",argv[0]);
    help();                                                                                                        //help
  }
  if(arg > 1){                                                                                                    //more than 1 check is whick tag is it 
    char fname[30];                             
    if(strcmp(argv[1],"-v") == 0 ){                                                                               //check view 
      // printf("Open view function\n");
      if(arg == 2)                                                                                                 //check file name present or not
      {
        printf("Enter the file name: ");
        scanf("%29s",fname);
        while(( (ch = getchar()) != '\n') &&  (ch  != EOF) );
      }else 
      {                                                                                                           //if file present condition false directly call the view function
        // printf("call view function \n");
        strcpy(fname,argv[2]);
      }
      // printf("call view function %s\n",fname);
                         //call validfile
        if(valid_file(fname))
        {                                                                                                       //validate file is mp3
        view_content(fname);                                                                                  //call view content
        }else
        {
          printf("Invalid file format\n");                                                                      //file name is invalid return endo of program
          return 0;
        }
      }else if(strcmp(argv[1],"-e") == 0)
      {                                                                                                          //check is tag is -e 
        char tag[3];
        char content[30];
        char fname[20];
        if(arg > 2)
        {                                                                                                           //if any tag present what content to edit
          if((strcmp(argv[2], "-a") ==0) || (strcmp(argv[2], "-t") ==0)|| (strcmp(argv[2], "-A") ==0) || (strcmp(argv[2], "-y") ==0) ||(strcmp(argv[2], "-m") ==0) ||(strcmp(argv[2], "-c") ==0) )
          {                                                                                                         //if give tag
            strcpy(tag,argv[2]);
            printf("Enter a content to edit: ");                                                                     //ask user to edit content
            scanf("%29[^\n]",content);
            while(((ch = getchar()) != '\n') &&  (ch  != EOF) );
            if(arg >3)
            {                                                                                                       //user give the filaneam or not
              // printf("i/p with file name\n");
              strcpy(fname,argv[3]);
            }else 
            {                                                                                                       //use not give ask file name to edit
              printf("Enter file name want to edit: ");
              scanf("%19s",fname);
              while(( (ch = getchar()) != '\n') &&  (ch  != EOF) );
            }
          }else
          {                                                                                                         //tag is invalid enter valid tag
            printf("Enter tag you what to edit: ");
            scanf("%2s",tag);                                                                                         //ask what content to edit
            while(( (ch = getchar()) != '\n') &&  (ch  != EOF) );
            printf("Enter a content to edit: ");
            scanf("%29[^\n]",content);
            while(( (ch = getchar()) != '\n') &&  (ch  != EOF) );
            if(strstr(argv[2],"mp3") == 0){
            printf("Enter file name want to edit: ");
            scanf("%19s",fname);
            while(( (ch = getchar()) != '\n') &&  (ch  != EOF) );
            }else{
              strcpy(fname,argv[2]);
            }
          }
        }else
        {                                                                                                           //user only give -e ask what content to edit                                         
          printf("Enter tag you what to edit: ");
          scanf("%2s",tag);
          while(( (ch = getchar()) != '\n') &&  (ch  != EOF) );
          printf("Enter content to edit: ");
          scanf("%29[^\n]",content);
          while(( (ch = getchar()) != '\n') &&  (ch  != EOF) );
          printf("Enter file name want to edit: ");
          scanf("%19s",fname);
          while(( (ch = getchar()) != '\n') &&  (ch  != EOF) );
        }
        
        // printf("%s %s \n",content,fname);
        if(valid_file(fname))
        {                                                                                                           //validate the file then call edit function
          //call edit function
           edit_content(tag,content,fname);
          }else
          {
            //printf("Inavlid file format\n");                                                                        //file is invalid end of the program
            return 0;
          }
        }else if(strcmp(argv[1] , "-h") == 0 || strcmp(argv[1] , "-h"))                                                 //user give -h call help function
        {
          // printf("Open help function\n");
          print_line(80);
          help();
        }
      }
}

/*
// checksheet
view ✅
edit ✅
help ✅


*/
