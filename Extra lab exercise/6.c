/*
LAB EXERCISE 2: Multiplication Table
? Write a C program that takes an integer input from the user and prints its multiplication
table using a for loop.
? Challenge: Allow the user to input the range of the multiplication table (e.g., from 1 to N).
*/
#include<stdio.h>
int main(){
	int num,range,i;
	printf("\n enter the number for print its multiplication table=");
	scanf("%d",&num);
	
	printf("\n enter the range for multiplication=");
	scanf("%d",&range);
	printf("\n multiplication table of %d from 1 to %d=\n",num,range);
	for(i=1;i<=range;i++){
	    printf("\n %d*%d=%d",num,i,num*i);	
	}
	return 0;
}
