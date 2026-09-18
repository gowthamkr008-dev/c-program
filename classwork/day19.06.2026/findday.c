#include<stdio.h>
int main(){
	char day;
	printf("Enter a day: ");
	scanf("%c",&day);

if(day =='1' || day == '8' ||day =='15'||day == '22'|| day=='29'){
	printf("sunday");
}else if(day =='2' || day == '9' ||day =='16'||day == '23'|| day=='30'){
	printf("monday");
}else if(day =='3' || day == '10' ||day =='17'||day == '24'|| day=='31'){
	printf("tuesday");
}else if(day =='4' || day == '11' ||day =='18'||day == '24'){
	printf("wenesday");
}else if(day =='5' || day == '12' ||day =='19'||day == '25'){
	printf("thursday");
}else if(day =='6' || day == '13' ||day =='20'||day == '26'){
	printf("friday");
}else if (day =='7' || day == '14' ||day =='21'||day == '27'){
	printf("saturday");
}return 0;
}
