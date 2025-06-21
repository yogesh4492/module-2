/*
LAB EXERCISE 3: Palindrome Check 
 
? Write a C program that takes a number as input and checks whether it is a palindrome using 
a function. 
? Challenge: Modify the program to check if a given string is a palindrome.*/
#include<stdio.h>
#include<string.h>
void n_pali(int num);
void s_pali(char str[]);
int main(){
	int num;
	printf("\n enter the num=");
	scanf("%d",&num);
	n_pali(num);
	char str[100];
	printf("\n enter any string=");
	scanf("%s",str);
	s_pali(str);
	return 0;
}

void n_pali(int num){
	int rem,rev=0,i;
	int temp=num;
	while(num!=0){
		rem=num%10;
		rev=(rev*10)+rem;
		num=num/10;
	}
	if(temp==rev){
		printf("\n %d is a palindrome number",temp);
	}
	else{
		printf("\n %d is not a palindrome number",temp);
	}
}

void s_pali(char str[]){
	int len=0,i;
	char str1[100];
	strcpy(str1,str);
	strrev(str);
	int res=strcmp(str1,str);
	if(res==0){
		printf(" %s is a palindrome string",str1);
	}
	else{
		printf(" %s is not a palindrome strring",str1);
	}
}
