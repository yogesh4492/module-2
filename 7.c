/*
Que-8. Write a C program that calculates the factorial of a number using a function. Include function declaration, definition, and call.
*/
#include<stdio.h>
int fact();//declaration
int main(){
	int result;
	result=fact();//function call
	printf("factorial of given number=%d",result);
	
	return 0;
}
int fact()//definition
{
	int num,fact=1,i;
	printf("\n enter the number=");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
	fact=fact*i;
	
	}
	return fact;
}
