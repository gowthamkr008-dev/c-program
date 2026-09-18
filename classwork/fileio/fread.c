#include<stdio.h>

#if 0
int main(){
	int n1,n2,n3,n4;
	FILE *fp;
	fp = fopen("num.txt","w+");
	if(fp == NULL){
		perror("Error");
		return 1;
	}
	
	printf("Enter the num1and num2: ");
	scanf("%d %d",&n1,&n2);
	
	fscanf(fp,"%d %d",&n1,&n2);//convertion do then save
	
	fwrite(&n1,sizeof(int),1,fp);
	fwrite(&n2,sizeof(int),1,fp);
	
	rewind(fp);
	/*
	fread(&n3,sizeof(int),1,fp);//save as it is without any conversion
	fread(&n4,sizeof(int),1,fp);
	*/
	fprintf(fp,"%d %d",n1,n2);
	printf("N3: %d N4: %d\n",n3,n4);
	fclose(fp);
	return 0;
}

#endif

#if 0
int main(){
	int arr[4] = {12,13,14,15};
	int arr_cp[4];
	FILE *fp;
	fp = fopen("write.txt","w+");
	if(fp == NULL){
		perror("Error");
		return 1;
	}
	
	fwrite(arr,sizeof(int),4,fp);
	fseek(fp,0l,SEEK_SET);
	fread(arr_cp ,sizeof(int),4,fp);
	printf("%d %d %d %d\n",arr_cp[0],arr_cp[1],arr_cp[2],arr_cp[3]);
	fclose(fp);
	return 0;
	
	
	
	return 0;
}

#endif




#if 1
int main(){
	int n1,n2,n3,n4;
	FILE *fp;
	fp = fopen("num24.txt","w+");
	if(fp == NULL){
		perror("Error");
		return 1;
	}
	
	printf("Enter the num1and num2: ");
	scanf("%x %x",&n1,&n2);
	
	//fscanf(fp,"%d %d",&n1,&n2);//convertion do then save
	
	fwrite(&n1,sizeof(int),1,fp);
	fwrite(&n2,sizeof(int),1,fp);
	
	rewind(fp);
	
	//fread(&n3,sizeof(int),1,fp);//save as it is without any conversion
	//fread(&n4,sizeof(int),1,fp);
	
	//fprintf(fp,"%d %d",n1,n2);
	printf("N3: %x N4: %x\n",n3,n4);
	fclose(fp);
	return 0;
}

#endif
