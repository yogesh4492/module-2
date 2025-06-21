/*Write a C program that takes the marks of a student as input and displays the corresponding grade based on the following conditions:
i.	Marks > 90: Grade A 
ii.	 Marks > 75 and <= 90: Grade B 
iii.	 Marks > 50 and <= 75: Grade C 
iv.	 Marks <= 50: Grade D " 
Use if-else or switch statements for the decision-making process.
*/
#include<stdio.h>
int main(){
int marks;
char grade;
printf("\n enter the marks of student=");
scanf("%d",&marks);
if(marks>=90){
grade='a';}
 else if(marks>70&&marks<90){
  grade='b';
}
else if(marks>50&&marks<70){
  grade='c';
}
else{
grade='d';
}
printf("\n grade of student=%c",grade);

return 0;}

