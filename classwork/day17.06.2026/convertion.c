#if 0


#include<stdio.h>
int main(){
	float f;
	 printf("enter the temperature in Fahrenheit: ");
	 scanf("%f", &f);
         float ce = (f-32.0) * (5.0/9.0);

	 printf("the converted Fahrenheit to Celcius is : %.2f\n", ce);

	 return 0;

}
#endif

#if 0
#include<stdio.h>
int main(){
	float celsius;
	printf("enter the temperature in celsius: ");
	scanf("%f",&celsius);
	double Fahrenheit = ((celsius *(9.0/5.0))+32.0);

	printf("the converted celcius to Fahrenheit: %.2lf\n", Fahrenheit);
       return 0;
}
#endif

#if 0
#include<stdio.h>
int main(){
    float celcius;

    scanf("%f",&celcius);
    
   int fahrenheit;
   double fa;
    fahrenheit =(double)((celcius*(9/5))+32);
    fa = fahrenheit;
    printf("%lf", fa);
    return 0;

}


#endif 



#if 1
#include <stdio.h>

int main() {
    int fahrenheit;
    float celsius;

    // 1. Get the Fahrenheit temperature as an integer
    printf("Enter temperature in Fahrenheit (integer): ");
    scanf("%d", &fahrenheit);
    celsius = (fahrenheit - 32) * (5.0 / 9.0);

    printf("%d Fahrenheit is equal to %.2f Celsius.\n", fahrenheit, celsius);

    return 0;
}


#endif
