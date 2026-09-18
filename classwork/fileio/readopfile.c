#include<stdio.h>
struct student{
  char name[20];
  int physics,chemistry,maths;
};

int main(){
 int size,c;
  FILE *fp;
  fp = fopen("student.out","r");
  if(fp == NULL){
    perror("Error:");
    return -1;
  }
fread(&size,sizeof(int),1,fp);
struct student s[size];
float avgphysics = 0,avgchemistry = 0,avgmaths = 0;


for(int i=0;i<size;i++){
fread(&s[i],sizeof(struct student),1,fp);
}
fread(&avgphysics,sizeof(float),1,fp);
fread(&avgchemistry,sizeof(float),1,fp);
fread(&avgmaths,sizeof(float),1,fp);

 printf("s.no  physics  chemistry  maths\n");
  for(int i=0;i<size;i++)
  printf("marks %d %d %d %d \n",i+1,s[i].physics,s[i].chemistry,s[i].maths);

  printf("average %.2f %.2f %2.f\n",avgphysics , avgchemistry,avgmaths);


  fclose(fp);
}
