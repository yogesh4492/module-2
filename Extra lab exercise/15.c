/*
LAB EXERCISE 2: Count Vowels and Consonants
? Write a C program that takes a string from the user and counts the number of vowels and
consonants in the string.
? Challenge: Extend the program to also count digits and special characters.*/

#include<stdio.h>
#include<ctype.h>
int main(){
	char str[50];
	int vowel=0,consonant=0,digit=0,sc=0,i;
	printf("\n enter the string=");
	gets(str);
	for(i=0;str[i]!='\0';i++){
        
		if(isalpha(str[i])){
			
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
		  vowel++;
	}
	    
	    else{
	    consonant++;
		}
	
	    	
   	}
   	else if(isdigit(str[i])){
   		digit++;
	   }
	   else if(str[i]!=' '&& str[i]!='\n'){
	   	sc++;
	   }
   }
   	 printf("\n number of vowel in string=%d",vowel);
     printf("\n cconsonant in string=%d",consonant);  
     //printf("\n cconsonant in string=%d",consonant);  
     printf("\n digit in string=%d",digit);   
     printf("\n special character in string=%d",sc);
	
	
	return 0;
}
