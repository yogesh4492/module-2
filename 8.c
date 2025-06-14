/*
Que-9 Write a C program that stores 5 integers in a one-dimensional array and prints
them. Extend this to handle a two-dimensional array (3x3 matrix) and
calculate the sum of all elements.*/
#include<stdio.h>
int main(){
	int a[5]={1,2,3,4,5},i,j;
    for(i=0;i<5;i++){
	printf("%d ",a[i]);
    }
    int b[3][3];
    for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    		printf("\n entere the elment of b[%d][%d]=",i,j);
    		scanf("%d",&b[i][j]);
    		
		}
	}
	int sum=0;
    printf("\n matrix of 3*3=\n");
    for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    		printf("%d ",b[i][j]);
    		sum=sum+b[i][j];
		}
		printf("\n");
	}
	
	printf("\n sum of all element=\n%d",sum);
	
	
	
	return 0;
}
