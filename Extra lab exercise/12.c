/*
LAB EXERCISE 2: Factorial Calculation 
 
? Write a C program that calculates the factorial of a given number using a function. 
 
? Challenge: Implement both an iterative and a recursive version of the factorial function and 
compare their performance for large numbers.*/

#include<stdio.h>
void fact(int num);

void fact_rec(int num,int fact1);
int main()
{   
	int num,fact1=1;
	printf("\n enter the num=");
	scanf("%d",&num);
	fact(num);
    fact_rec(num,fact1); 
	return 0;
}
void fact(int num){
	int fact=1,i;
	for(i=1;i<=num;i++){
		fact=fact*i;
	}
	printf("\n factorial of %d is =%d",num,fact);
}
void fact_rec(int num,int fact1){
	//int i=1;
	if(num==0||num==1){
		printf("\n factorial is %d",fact1);
	    return;
	}
	fact1=fact1*num;
	fact_rec(num-1,fact1);
	
	
}
