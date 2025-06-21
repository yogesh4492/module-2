/*Write a C program that takes an integer from the user and checks the following using
different operators:
o Whether the number is even or odd.
o Whether the number is positive, negative, orzero.
o Whether the number is a multiple of both 3 and 5.
*/
#include<stdio.h>
int main(){
	int num;
	printf("\n enter the number=");
	scanf("%d",&num);
	
	int c;
	c=(num%2==0)?printf("\n %d is even number",num):printf("\n %d is  a odd number",num);
	
	int d;
	d=(num>0)?printf("\n %d is positive number",num):(num<0)?printf("\n %d is negative number",num):printf("\n number is neutral");
	
	int f=(num%3==0&&num%5==0)?printf("\n %d is multiple of both 3 and 5",num):printf("\n %d is not a multiple of both 3 and 5",num);
	return 0;
}
