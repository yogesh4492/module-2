/*
Que-11.Write a C program that takes two strings from the user and concatenates them
using strcat(). Display the concatenated string and its length using
strlen().*/

#include<stdio.h>
#include<string.h>
int main(){

    char str1[100],str2[100];
	printf("\n enter the string 1=");
	gets(str1);
	printf("\n enter the string 2=");
	gets(str2);
	
	printf("\n original string 1=%s",str1);
	printf("\n original string 2=%s",str2);
	
	strcat(str1,str2);
	printf("\n concatanated string=%s",str1);
	
	int result=strlen(str1);
	printf("\n Lenth of concatenated string =%d",result);
	return 0;
}
