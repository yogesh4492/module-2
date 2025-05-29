/*QUE-3 Write a C program that includes variables, constants, and comments. Declare
and use different data types (int, char, float) and display their values.*/
#include<stdio.h>
/* constants*/
#define c 10
int main(){
	printf("%d",c);
	
	int roll,std;
	float per;
	char grade;
	long int fees;
	printf("\n enter your roll no=");
	scanf("%d",&roll);
	printf("\n enter your standard=");
	scanf("%d",&std);
	printf("\n enter your percentage=");
	scanf("%f",&per);
	printf("\n enter your grade=");
	scanf(" %c",&grade);
	
	printf("\n enter your fees=");
	scanf("%ld",&fees);
	
	printf("\n roll no=%d",roll);
	printf("\n standard=%d",std);
	printf("\n percentage=%f",per);
	printf("\n grade=%c",grade);
	printf("\n fees=%ld",fees);
	
	return 0;
}

