#include"reader.h"

void help()
{
  printf("USAGE : \n");
  printf("To view Please pass like : ./a.out -v mp3filename\n");
  printf("To edit Please pass like : ./a.out -e  -t/-a/-A/-m/-y/-c  mp3filename\n\n");
  printf("1. '-v' ->view content of file\n2. '-e' -> edit the content\n   3. '-t' -> edit artist name\n   4. '-a' -> edit song name\n   5. '-A' -> edit album name\n   6. '-m' -> edit content type\n   7. '-y' -> edit the year\n   8. '-c' -> edit Language\n\n");
  printf("To get help pass like : ./a.out -help");
  print_line(80);

}