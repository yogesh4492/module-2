/*
6. Strings
LAB EXERCISE 1: String Reversal
? Write a C program that takes a string as input and reverses it using a function.
? Challenge: Write the program without using built-in string handling functions.*/

#include<stdio.h>
void reverse(char str[]);
int main(){
	char str[50];
	printf("\n enter Any string=");
	gets(str);
	printf("\n original string=%s",str);
	reverse(str);
	return 0;
}
void reverse(char str[]){
	int i,len=0;
	for(i=0;str[i]!='\0';i++){
		len++;
	}
	printf("\n Reversed string=");
	for(i=len-1;i>=0;i--){
		printf("%c",str[i]);
	}
}
