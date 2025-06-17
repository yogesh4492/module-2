/*Que-13. Write a C program to create a file, write a string into it, close the file, then open the file again to read and display its contents.*/
#include<stdio.h>
int main(){
	FILE *fp;
	fp=fopen("demo.txt","a");
	fprintf(fp,"\nhello this is my assignment value");
	
	fclose(fp);
	
	char str[100];
	FILE *fr;
	fr=fopen("demo.txt","r");
	
	if(fr==NULL){
		printf("\n file doesn't exists.");
	}
	else{
		while(fgets(str,sizeof(str),fr)){
			printf("\n%s",str);
		}
	}
	
	fclose(fr);
	return 0;
}
