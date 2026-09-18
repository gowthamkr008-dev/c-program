#include<stdio.h>
int main(){
	char direction;
	printf("Enter direction: ");
	scanf("%c",&direction);

	switch(direction)
	{
	case 'N':
		printf("North");
		break;
	case 'E':
		printf("East");
		break;
	case 'W':
		printf("West");
		break;
	case 'S':
		printf("South");
		break;
	 case 'n':
                printf("North");
                break;
        case 'e':
                printf("East");
                break;
        case 'w':
                printf("West");
                break;
        case 's':
                printf("South");
                break;
	default:
		printf("Invalid input");
}
return 0;
}

