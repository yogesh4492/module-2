/*LAB EXERCISE 2: Number Comparison
? Write a C program that takes three numbers from the user and determines:
o The largest number.
o The smallest number.
? Challenge: Solve the problem using both if-else and switch-case statements.*/
#include<stdio.h>
int main(){
	//using if-else
	int n1,n2,n3;
	printf("\n enter the num1=");
	scanf("%d",&n1);
	printf("\n enter the num2=");
	scanf("%d",&n2);
	printf("\n enter the num3=");
	scanf("%d",&n3);
	if(n1>n2&&n1>n3){
		printf("\n %d is a largest number",n1);
		
	}
	else if(n2>n1&&n2>n3){
		
		printf("\n %d is a largest number",n2);
	}
	else{
		printf("\n %d is a largest number",n3);
	}
	if(n1<n2&&n1<n3){
		
		printf("\n %d is a smallest number",n1);
	}
	else if(n2<n1&&n2<n3){
		
		printf("\n %d is a smallest number",n2);
	}
	else{
		
		printf("\n %d is a smallest number",n3);
	}
	
	
	//using switch statement
	//int large,small;
	switch(n1>n2&&n1>n3){
		case 1:
			
		    printf("\n %d is a largest number",n1);
			break;
		case 0:
			switch(n2>n1&&n2>n3){
				case 1:
					
		            printf("\n %d is a largest number",n2);
					break;
				case 0:
					
	          	    printf("\n %d is a largest number",n3);
					break;
			}
	}
	switch(n1<n2&&n1<n3){
		case 1:
			
		    printf("\n %d is a smallest number",n1);
			break;
		case 0:
			switch(n2<n1&&n2<n3){
				case 1:
					
		            printf("\n %d is a smallest number",n2);
					break;
				case 0:
					
	          	    printf("\n %d is a smallest number",n3);
					break;
			}
	}
	return 0;
}

