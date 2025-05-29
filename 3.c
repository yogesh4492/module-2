/*
QUE-4 EXERCISE:
o Write a C program that accepts two integers from the user and performs
arithmetic, relational, and logical operations on them. Display the results */

#include<stdio.h>
int main(){
	int num1,num2;
	printf("\n Enter value in number 1=");
	scanf("%d",&num1);
	
	printf("\n Enter value in number 2=");
	scanf("%d",&num2);
	//arithmetic operations
	
	printf("\n Addition of %d and %d is =%d",num1,num2,num1+num2);
	printf("\n Subtraction of %d and %d is =%d",num1,num2,num1-num2);
	printf("\n Multiplication of %d and %d is =%d",num1,num2,num1*num2);
	printf("\n Division  of %d and %d is =%d",num1,num2,num1/num2);
	printf("\n Remaindor of %d and %d is =%d",num1,num2,num1%num2);
	printf("\n");
	
	//relation operation

	printf("\n Result of %d>%d is=%d",num1,num2,num1>num2);
	printf("\n Result of %d>=%d is=%d",num1,num2,num1>=num2);
	printf("\n Result of %d<%d is=%d",num1,num2,num1<num2);
	printf("\n Result of %d<=%d is=%d",num1,num2,num1<=num2);
	printf("\n Result of %d==%d is=%d",num1,num2,num1==num2);
	printf("\n Result of %d!=%d is=%d",num1,num2,num1!=num2);
	printf("\n ");
	
	//logical operator
	
	printf("\n Result of %d>=%d && %d<=%d = %d",num1,num2,num1,num2,num1>=num2 && num1<=num2);
	printf("\n Result of %d>=%d || %d<=%d = %d",num1,num2,num1,num2,num1>=num2 || num1<=num2);
	printf("\n Result of !(%d>=%d)= %d",num1,num2,!(num1>=num2));
	
	return 0;
}
