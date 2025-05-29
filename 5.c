/*
Que-6 Write a C program to print numbers from 1 to 10 using all three types of loops
(while, for, do-while).
*/
#include<stdio.h>
int main(){
	//while loop
	printf("\n while loop:");
	int num=1,i;
	while(num<=10){
		printf("\n number=%d",num);
		num++;
	}
	//for loop
	
	printf("\n");
	printf("\n for loop :");
	num=10;
	for(i=1;i<=num;i++){
		printf("\n number=%d",i);
	}
	
	//do..while loop
		printf("\n");
	printf("\n do...while loop :");
	num=1;
	do
	{
     printf("\nnumber=%d",num);
     num++;
	}while(num<=10);
	
	
	return 0;
}
