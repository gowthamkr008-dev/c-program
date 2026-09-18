#include<stdio.h>
#include<string.h>
struct student{
  char name[20];
  int physics,maths,chemistry;
};

int main(){
  int size,c;
  FILE *fp;
  fp = fopen("student.out","w+");
  if(fp == NULL){
    perror("Error:");
    return -1;
  }
  char ch;
  printf("Enter number of student: ");
  scanf("%d",&size);
  while((c =getchar()) != '\n'&& c !=EOF);
  struct student s[size];
  float avgphysics = 0,avgchemistry = 0,avgmaths = 0;
  fwrite(&size,sizeof(int),1,fp);
  for(int i=0;i<size;i++){
    printf("Enter student name : ");
    scanf("%19[^\n]",s[i].name);
      while((c =getchar()) != '\n' && c !=EOF);
      printf("Enter the P,C and M marks : ");
    scanf("%d %d %d",&s[i].physics,&s[i].chemistry,&s[i].maths);
    while((c =getchar()) != '\n' && c !=EOF);
    fwrite(&s[i],sizeof(struct student),1,fp);
    avgphysics += s[i].physics;
    avgchemistry +=s[i].chemistry;
     avgmaths +=s[i].maths;
  }
  avgphysics /=size;
  avgchemistry /= size;
  avgmaths /= size;

    fwrite(&avgphysics,sizeof(float),1,fp);
     fwrite(&avgchemistry,sizeof(float),1,fp);
    fwrite(&avgmaths,sizeof(float),1,fp);
     rewind(fp);
  printf("s.no  physics  chemistry  maths\n");
  for(int i=0;i<size;i++)
  printf("marks %d %d %d %d \n",i+1,s[i].physics,s[i].chemistry,s[i].maths);

  printf("average %.2f %.2f %2.f\n",avgphysics , avgchemistry,avgmaths);

  int size2;
struct student s2[size2];
printf("\n");
 fread(&size2,sizeof(int),1,fp);
// printf("Size of %d",size2);
float  avgphysics1 =0,avgchemistry1 =0,avgmaths1=0;
 for(int i=0;i<size2;i++){
   fread(&s2[i],sizeof(struct student),1,fp);
     
 }

  fread(&avgphysics1,sizeof(float),1,fp);
  fread(&avgchemistry1,sizeof(float),1,fp);
  fread(&avgmaths1,sizeof(float),1,fp);



  printf("s.no  physics  chemistry  maths\n");
  for(int i=0;i<size2;i++)
  printf("marks %d %d %d %d \n",i+1,s2[i].physics,s2[i].chemistry,s2[i].maths);

  printf("average %.2f %.2f %2.f\n",avgphysics1 , avgchemistry1,avgmaths1);


  fclose(fp);


}