#include"reader.h"

// int argc, char *argv[]

int main(){
  
  // char tag[5],sounce[50];
  // if(argc > 0){
  //   strcpy(tag, argv[1]);
  //   printf("%s\n",tag); 
  //   strcpy(sounce,argv[2]);  
  //   printf("%s\n",sounce);
  // }
  // else{
  //   printf("ERROR: ./a.out : INVALID ARGUMENTS \n USAGE :\nTo view please pass like: ./a.out -v mp3filename\nTo edit please pass like : ./a.out -e -t/-a/-A/-m/-y/-c changing_text mp3filename\nTo get help pass like : ./a.out -- help\n");
  //   return -1;
  // }


  //display menu
  print(60);
  printf("%15sMP3 Tag Reader & Editor","");
  print(60);
  //printf("Menu\n1. View\n2. Edit\n3. Help\n4. Exit\nEnter our choice:");
  short int choice,valid =0;
  char ch;
  do{
    printf("Menu\n1. View\n2. Edit\n3. Help\n4. Exit\nEnter our choice:");
    valid =0;
    scanf("%hd",&choice);
    while( (ch = getchar() != '\n' && ch != EOF));
    switch(choice){
      case 1:
        print(80);
        printf("%25s %s %24s %s"," ","MP3 Tag Reader and Editor\n"," ","View information of song");
        print(80);
        view();
        valid =0;
      break;
      case 2:
      {
        int c;
       help();
       printf("Edit\n");
       char tag[3],content[50];
       printf("Enter the tag: ");
       scanf("%s",tag);
       while ((c = getchar()) != '\n' && c != EOF);
       printf("Enter the Edit_content : ");
       scanf("%[^\n]",content);
       while ((c = getchar()) != '\n' && c != EOF);
       content[strlen(content)] = '\0';
       edit(tag,content);
      }
       valid =0;
      break;
      case 3: 
        print(60);
      printf("%25sHelp","");
       help();
       valid =0;
      break;
      case 4:
        printf("Exit\n");
        valid =1;
      break;
      default:
        printf("Enter valid choice: ");
        valid =0;
      }
    }while(valid !=1);


    return 0;
  }