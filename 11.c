/*
que-12 Write a C program that defines a structure to store a student's details (name,
roll number, and marks). Use an array of structures to store details of 3
students and print them.*/
#include<stdio.h>
struct student{
	char name[100];
	int roll;
	int marks;
};
int main(){
	struct student s[3];
	int i;
	for(i=0;i<3;i++){
		printf("\n Enter Student[%d] Name=",i+1);
		scanf("%s",&s[i].name);
		printf("\n Enter Student[%d] Roll Number=",i+1);
		scanf("%d",&s[i].roll);
		printf("\n Enter Student[%d] Marks=",i+1);
		scanf("%d",&s[i].marks);
	}
	for(i=0;i<3;i++){
		printf("\n Student[%d] Name=%s",i+1,s[i].name);
		printf("\n Student[%d] Roll no=%d",i+1,s[i].roll);
		printf("\n Student[%d] Marks=%d",i+1,s[i].marks);
		printf("\n");
		printf("\n");
	}
	
	return 0;
}
