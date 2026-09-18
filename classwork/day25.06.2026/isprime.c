#if  0

#include <stdio.h>
int main() {
	int in,prime=1;
	scanf("%d",&in);
        if(in <=0)
		printf("Invalid input");
	else if(in==2)
		prime=1;
	for(int i =3; i <= in / 2; i+=2)
	{
		if(in%i ==0){
			prime =0;
			break;
	}
	}
	if(prime==1)
		printf("%d is a prime number",in);
	else
		printf("%d is not a prime number",in);
	
	return 0;
}
#endif

#if 1
#include<stdio.h>
int main(){
    int num, prime = 1; // default ah prime nu vachukalam
    scanf("%d", &num);

    // 0, 1, negative numbers prime illa
    if(num <= 1){
        prime = 0;
    }
    else {
        // 2 la irunthu check pannanum
        for(int i = 2; i < num; i++){
            if(num % i == 0){
                prime = 0; // divide aachu na prime illa
                break;     // vera check panna theva illa
            }
        }
    }

    if(prime == 1)
        printf("The given number is prime\n");
    else
        printf("The given number is not a prime\n");

    return 0;
}

#endif
