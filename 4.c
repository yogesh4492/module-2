/*
Que-5 Write a C program to check if a number is even or odd using an if-else
statement. Extend the program using a switch statement to display the month
name based on the user’s input (1 for January, 2 for February, etc.).
*/
#include<stdio.h>
int main(){
	//number even or odd check
	int num;
	printf("\n Enter the value of Number=");
	scanf("%d",&num);
	if(num%2==0){
		printf("\n Number is Even.");
		
	}
	else{
		printf("\n Number is Odd.");
	}
	
	// Display the months
	printf("\n");
	
	int month;
	printf("\n enter value for month=");
	scanf("%d",&month);
	
	switch(month){
		case 1:
			printf("\n Month='January'");
			break;
		case 2:
			printf("\n Month='February'");
			break;	
		case 3:
			printf("\n Month='March'");
			break;
		case 4:
			printf("\n Month='April'");
			break;
		case 5:
			printf("\n Month='May'");
			break;
		case 6:
			printf("\n Month='June'");
			break;
		case 7:
			printf("\n Month='July'");
			break;
		case 8:
			printf("\n Month='August'");
			break;
		case 9:
			printf("\n Month='September'");
			break;
		case 10:
			printf("\n Month='October'");
			break;
		case 11:
			printf("\n Month='November'");
			break;
		case 12:
			printf("\n Month='December'");
			break;
		default:
			printf("\n Invalid Month.");
	}
	return 0;
}
