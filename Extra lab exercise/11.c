/*
5. Functions
LAB EXERCISE 1: Fibonacci Sequence
? Write a C program that generates the Fibonacci sequence up to N terms using a recursive
function.
? Challenge: Modify the program to calculate the Nth Fibonacci number using both iterative
and recursive methods. Compare their efficiency.*/

#include<stdio.h>
void fibo_recu(int terms,int n1,int n2);
int fibo_rec_nth(int terms,int n1,int n2);
void fibo_ite_nth(int terms,int n1,int n2);
int main(){
	int terms;
	int n1=0,n2=1;
	printf("\n enter the terms for fibonacci series=");
	scanf("%d",&terms);
	printf("\n fibonacci series=%d %d ",n1,n2);
	
	fibo_recu(terms-2,n1,n2);
	
	int nth=fibo_rec_nth(terms-1,n1,n2);
	
	printf("\n fibonacci series of nth term= %d ",nth);
	
	printf("\n fibonacci series of nth term=  ");
	
	fibo_ite_nth(terms,n1,n2);
	return 0;
}
void fibo_recu(int terms,int n1,int n2){
	if(terms<=0){
		return;
	}
	int n3;
		n3=n1+n2;
		n1=n2;
		n2=n3;
		printf("%d ",n3);
	   fibo_recu(terms-1,n1,n2);
		
	
}
int fibo_rec_nth(int terms,int n1,int n2){
	int n3;
	if(terms<=0){
	return;
		//printf("%d ",n3);
	}
	
	n3=n1+n2;

	n1=n2;
	n2=n3;
    
	fibo_rec_nth(terms-1,n1,n2);
	
}

void fibo_ite_nth(int terms,int n1,int n2){
	int n3,i;
	if(terms<=0){
		return;
	}
	for(i=0;i<terms-1;i++){
		n3=n1+n2;
		n1=n2;
		n2=n3;
		
	}
	printf("%d ",n3);
}

	
