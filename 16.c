/*
LAB EXERCISE 3: Word Count
? Write a C program that counts the number of words in a sentence entered by the user.
? Challenge: Modify the program to find the longest word in the sentence.*/
#include<stdio.h>
int main(){
	char str[1000];
	int word=0,i;
	printf("\n enter the sentence =");
	fgets(str,sizeof(str),stdin);
	for(i=0;str[i]!='\0';i++){
		if(str[i]==' '||str[i]=='\n'){
			word++;
			
			continue;
		}
		
	}
	printf("\n words=%d",word);
	return 0;
}
