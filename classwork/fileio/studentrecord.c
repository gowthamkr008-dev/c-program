#include<stdio.h>
#include<string.h>

struct student{
	char name[20];
	int  physics,maths, chemistry ;
};
int main(){
	FILE *fp;
	fp = fopen("record.out","w+");
	if(fp == NULL){
		perror("Error");
		return -1;
	}
	struct student s[10];
	char ch;
	float averagemaths = 0,averagephysics =0,averagechemistry =0;
	int i;
	for( i=0;i<2;i++){
	scanf(" %[^\n]",s[i].name);
	scanf(" %d",&s[i].maths);
	scanf(" %d",&s[i].physics);
	scanf(" %d",&s[i].chemistry);
	
	printf("Enter next\n");
	//fwrite(&s[i].average,sizeof(float),1,fp);
	fwrite(&s[i].maths,sizeof(int),1,fp);
	fwrite(&s[i].physics,sizeof(int),1,fp);
	fwrite(&s[i].chemistry,sizeof(int),1,fp);
	//fread(&n4,sizeof(int),1,fp);
	
	for(int j=0;j<strlen(s[i].name);j++){
	  fwrite(&s[i].name[j], sizeof(char), 1, fp);
	 // printf("%c",s[i].name[j]);
	 }
	
	averagemaths += s[i].maths;
	averagephysics += s[i].physics;
	averagechemistry +=s[i].chemistry;
	
	}
	averagemaths = averagemaths/i;
	 averagephysics = averagephysics /i;
	 averagechemistry = averagechemistry/i;
	
	fwrite(&averagechemistry,sizeof(float),1,fp);
	fwrite(&averagephysics,sizeof(float),1,fp);
	fwrite(&averagemaths,sizeof(float),1,fp);
	
	printf("%-10s %-10s %-10s %-10s\n","name","maths","physics","chemistry");
	for(int i=0;i<2;i++)
	
	printf("%-8s %8d %d %d\n",s[i].name,s[i].maths,s[i].physics,s[i].chemistry);
	printf("%.2f %.2f %.2f",averagemaths,averagephysics,averagechemistry );
	
	
	
	
	
	fclose(fp);
	return 0;
}
