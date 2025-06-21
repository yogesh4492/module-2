/*   Lab Exercise : Simple Calculator   */
#include<stdio.h>
int main(){
	int num1,num2;
	up:
	printf("\n enter the value of num1=");
	scanf("%d",&num1);
	printf("\n enter the value of num2=");
	scanf("%d",&num2);
	
	char ch='%',choice;
	printf("\n Press '+' for Addition");
	printf("\n Press '-' for Subtarction");
	printf("\n Press '*' for Multiplication");
	printf("\n Press '/' for Division");
	printf("\n Press '%c' for Remaindor",ch);
	float ans=(float)num1/(float)num2;
	
	printf("\n Enter your Choice...:");
	scanf(" %c",&choice);
	
	switch(choice){
		case '+':
			printf("\n Addition of %d and %d is =%d",num1,num2,num1+num2);
			break;
		case '-':
			printf("\n Subtraction of %d and %d is =%d",num1,num2,num1-num2);
			break;
		case '*':
			printf("\n Multiplication of %d and %d is =%d",num1,num2,num1*num2);
			break;
		case '/':
			printf("\n Division of %d and %d is =%.2f",num1,num2,ans);
			break;
		case '%':
			printf("\n Remaindor of %d and %d is =%d",num1,num2,num1%num2);
			break;
		default:
			printf("\n Invalid input");
			printf("\n Try again!");
			goto up;
	}
	printf("\n Do you Want to Perform Another Calculation? Y/N...:");
	scanf(" %c",&choice);
	if(choice=='y'||choice=='Y'){
		goto up;
	}
	
	
	return 0;
}
