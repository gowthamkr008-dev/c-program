#if 0

#include<stdio.h>
int main(){
	int date;
	printf("enter the date of a year 1 - 365:");
       scanf("%d",&date);

       int days = (date-1)%7;
         int day = days+1;
      switch(day)
  {
	  case 1:
		  printf("Sunday");
		  break;
	  case 2:
		  printf("Monday");
                  break;
	  case 3:
		  printf("tuesday");
		  break;
	  case 4:
		  printf("wenesday");
		  break;
	  case 5:
		  printf("thursday");
		  break;
	  case 6:
		  printf("friday");
		  break;
	  case 7:
		  printf("saturday");
		  break;
	  default:
		  printf("invalid");
		   
  }
      return 0;
}


#endif

#if 1
#include<stdio.h>
int main(){
	int week;
	printf("Enter a number to find a day of week: ");
	scanf("%d",&week);
	switch (week){
		case 1:
			printf("Sunday");
			break;
		case 2:
			printf("Monday");
			break;
		case 3: printf("tuesday");
			break;
		case 4:
			printf("Wenesday");
			break;
		case 5:
			printf("Thursday");
			break;
		case 6:
			printf("Friday");
			break;
		case 7:
			printf("Saturday");
			break;
		default:
			printf("Invalid number to find a day");
	}
	printf("\n");
	return 0;
}
#endif
