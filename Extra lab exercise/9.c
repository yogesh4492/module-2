/*
LAB EXERCISE 2: Matrix Addition
? Write a C program that accepts two 2x2 matrices from the user and adds them. Display the
resultant matrix.
? Challenge: Extend the program to work with 3x3 matrices and matrix multiplication.*/

#include<stdio.h>
int main(){
	
	int a[10][10],b[10][10],ans[10][10];
	int size,i,j,k;
	printf("\n enter the size of matrix for Addition=");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("\n enter the element in a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("\n enter the element in b[%d][%d]=",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			ans[i][j]=a[i][j]+b[i][j];
		}
	}
	
	printf("\n array a=\n");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n array b=\n");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	printf("\n matrix addition=\n");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("%d ",ans[i][j]);
		}
		printf("\n");
	}
	printf("\n aaddition completed of 2*2 matrix.");
	printf("\n now try 3*3 matrix Multiplication");
	
	
	int c[10][10],d[10][10],mul[10][10];
	int size1;
	printf("\n enter the size of matrix for multiplication=");
	scanf("%d",&size1);
	for(i=0;i<size1;i++){
		for(j=0;j<size1;j++){
			printf("\n enter the element in c[%d][%d]=",i,j);
			scanf("%d",&c[i][j]);
		}
	}
	for(i=0;i<size1;i++){
		for(j=0;j<size1;j++){
			printf("\n enter the element in d[%d][%d]=",i,j);
			scanf("%d",&d[i][j]);
		}
	}
	for(i=0;i<size1;i++){
		for(j=0;j<size1;j++){
			mul[i][j]=0;
			for(k=0;k<size1;k++){
				mul[i][j]=mul[i][j]+(c[i][k]*d[k][j]);
			}
		}
	}
	
	printf("\n array c=\n");
	for(i=0;i<size1;i++){
		for(j=0;j<size1;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	printf("\n array d=\n");
	for(i=0;i<size1;i++){
		for(j=0;j<size1;j++){
			printf("%d ",d[i][j]);
		}
		printf("\n");
	}
	printf("\n matrix multiplication=\n");
	for(i=0;i<size1;i++){
		for(j=0;j<size1;j++){
			printf("%d ",mul[i][j]);
		}
		printf("\n");
	}
	return 0;
}
