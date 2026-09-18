#include<stdio.h>
struct bill{
	char item[50];
	int pcs;
	float cost;
};


int main(){
	struct bill s[10];
	int i=0;
	char ch;
	float amount = 0;
	int j=0,quantity =0;
	do{
		printf("Enter the item: ");

		scanf(" %[^\n]",s[i].item);
		
		printf("Enter the pcs: ");
		scanf(" %d",&s[i].pcs);

		printf("Enter the item cost: ");
		scanf(" %f",&s[i].cost);
		
		printf("add more data Y/N: ");
		scanf(" %c",&ch);
		
		
		if(ch == 'Y' ||ch == 'y'){
		 i++;
		}else{
		
			break;
		}
		
		
	}while(i<10);
	
	printf("\n");
	printf("-------------------------------------------------------\n\n");
	
	printf("%-4s %-15s %8s %12s %12s\n","S.NO","Name","Quantity","Cost","Amount");
	
	printf("-------------------------------------------------------\n\n");
	
	for(int j=0;j<=i;j++){
	
		printf("%-4d %-20.15s %5d %12.2f %10.2f\n",j+1,s[j].item, s[j].pcs, s[j].cost, s[j].cost * s[j].pcs);
		amount += (s[j].pcs * s[j].cost);
		quantity += s[j].pcs;
	}
	printf("-------------------------------------------------------\n");
	printf("%-20s %10d %22.2f\n","Total",quantity,amount);
	printf("-------------------------------------------------------\n");
	
	
	
	
	
	return 0;
}

































