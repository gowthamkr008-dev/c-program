#include<stdio.h>
int main(){
	int x;//pint garbage value
	{
	//this x present until the block end
    ---int x = 20;
	|	{
	|	//the extern present untile block end
	|	----extern int x;------------
	|   |   printf("x: %d\n",x);    |
	|	|}printf("x: %d\n",x);      |
	---}printf("x: %d\n",x);        |
	return 0;                       |
}                                   |
int x=30;<--------------------------|
