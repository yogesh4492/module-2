/*
LAB EXERCISE 1: Prime Number Check
Write a C program that checks whether a given number is a prime number or not using a
for loop.
Challenge: Modify the program to print all prime numbers between 1 and a given number.*/
#include<stdio.h>
int main(){
	//prime number check
	int num,i,j,flag=1;
	printf("\n enter the number=");
	scanf("%d",&num);
	
	for(i=2;i<num;i++){
		if(num%i==0){
			flag=0;
		    break;
		}
		
	}
	if(flag==1){
		printf("\n %d is a prime number",num);
	}
	else{
		printf("\n %d is not a prime number",num);
	}

    printf("\nPrime numbers between 1 and %d are:\n", num);

    for (i = 2; i <= num; i++) {
    	flag=1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                flag= 0;
                break;
           }
        }

        if (flag==1) {
           printf("%d ", i);
        }
   }



	return 0;
	
}
