/*
Que-7 Write a C program that uses the break statement to stop printing numbers
when it reaches 5. Modify the program to skip printing the number 3 using the
continue statement.
*/
#include<stdio.h>
int main(){
	int number,i;
	printf("\n Enter the Value Of Number=");
	scanf("%d",&number);
	for(i=1;i<=number;i++){
		if(i==5){
			break;
		}
		else if(i==3){
			continue;
		}
		else{
			printf("\n number=%d",i);
		}
	}
	
	return 0;
}
