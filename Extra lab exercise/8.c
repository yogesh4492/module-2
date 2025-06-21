/*
4. Arrays
LAB EXERCISE 1: Maximum and Minimum in Array
? Write a C program that accepts 10 integers from the user and stores them in an array. The
program should then find and print the maximum and minimum values in the array.
? Challenge: Extend the program to sort the array in ascending order.
*/
#include<stdio.h>
int main(){
	int a[10],i;
	for(i=0;i<10;i++){
		printf("\n enter the element in a[%d]",i);
		scanf("%d",&a[i]);
	}
	int max=a[0];
    int min=a[0];
    for(i=0;i<10;i++){
    	if(a[i]>max){
    		max=a[i];
		}
	}
	for(i=0;i<10;i++){
		if(a[i]<min){
			min=a[i];
		}
	}
	printf("\n maximum value is =%d",max);
	printf("\n miniimum value is =%d",min);
	printf("\n original array=\n");
	for(i=0;i<10;i++){
		printf("%d ",a[i]);
	}
	int j,temp;
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n sorted array=\n");
	for(i=0;i<10;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
