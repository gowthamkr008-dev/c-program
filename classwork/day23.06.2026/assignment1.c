#if 1 
/*
 
 */

#include<stdio.h>
int main(){
	int num1,num2,num3;
	printf("Enter the three number: ");
	scanf("%d %d %d",&num1,&num2,&num3);
	if((num1 > num2 )||(num1>num3 )){
		if((num1<num3)||(num1<num2)){
		printf("Num 1 is middle number %d \n",num1);
		}else{
		printf("num 3 is middle number %d\n",num3);
		}
	}else if((num2 > num1 )||(num2>num3 ))
	{
		if((num2<num3)||(num2<num1)){
		printf("Num 2 is middle number %d \n",num2);
		}
		else{
                printf("num 3 is middle number %d\n",num3);
                }
	}
	else{
		printf("Num 3 is middle number %d \n",num3);
 	}
return 0;
}

#endif


#if 0


//user number is less than 0 do else
  else
  {
      //compare the 3 number
      if((num1 < num2 && num1 > num3) || (num1 > num2 && num1 < num2))
      {
          //condition is true print middle num is 1
        printf("The middle number is %d",num1);
    }
    //compare other way the  number
    else if((num2 < num1 && num2 > num3)||(num2 > num1 && num2 < num3))
    {
        //print middle number is num2
        printf("The middle number is %d",num2);
    }
    //both condition is false do else
    else
    {
        //print the middle number is 3
        printf("The middle number is %d",num3);
    }

  }





/*
name: Gowtham K R
date: 20.06.2026
description: check the give 3 number is to finde the middle number

sample i/p: 20 25 30

sample o/p: 25

*/


#include<stdio.h>
int main(){
    //decleare a 3 integer
    int num1,num2,num3;
    //print the prompt message
    printf("Enter the three number: ");
    //get the input from user
    scanf(" %d",&num1);
    scanf(" %d",&num2);
    scanf(" %d",&num3);
    //check the condition if the number is greater the 0 get into the if
//  if(num1 > 0 && num2 > 0 && num3 > 0)
 // { //compare the given three input using logical opereator
    if((num1 > num2 && num1 < num3) || (num1 < num2 && num1 > num2))
    {
        //print the num 1 is middle
         printf("The middle number is %d",num1);

    }
    // check the if condition is false compare the else if
    else if((num2 > num1 && num2 < num3)||(num2 < num1 && num2 > num3))
    {

        //print the num 2 is middle
        printf("The middle number is %d",num2);

    }
    //both condition is false  do else
    else
    {
        //print the middle number is num3
        printf("The middle number is %d",num3);
    }
  
return 0;
}


#endif
