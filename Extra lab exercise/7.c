/*
LAB EXERCISE 3: Sum of Digits
? Write a C program that takes an integer from the user and calculates the sum of its digits
using a while loop.
? Challenge: Extend the program to reverse the digits of the number.*/
#include<stdio.h>
int main(){
	int num,sum=0,rem,rev=0;
	printf("\n enter the number=");
	scanf("%d",&num);
	printf("\n number you entered=%d",num);
	while(num!=0){
		rem=num%10;
		sum=sum+rem;
		rev=(rev*10)+rem;
		num=num/10;
	}
	printf("\n sum of all its digit=%d",sum);
	
	printf("\n reversed digit of number=%d",rev);
	return 0;
}
