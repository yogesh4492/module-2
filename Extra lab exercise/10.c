/*
LAB EXERCISE 3: Sum of Array Elements
? Write a C program that takes N numbers from the user and stores them in an array. The
program should then calculate and display the sum of all array elements.
? Challenge: Modify the program to also find the average of the numbers.*/

#include<stdio.h>
int main(){
	int a[100],size,i,sum=0;
	printf("\n enter the size of array=");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		printf("\n enter the element in a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("\n original array=");
	for(i=0;i<size;i++){
		printf("%d ",a[i]);
	}
	
	for(i=0;i<size;i++){
		sum=sum+a[i];
	}
	printf("\n sum of all element=%d",sum);
	
	float avg=(float)sum/(float)size;
	printf("\n average of the numbers=%.2f",avg);
	return 0;
}
