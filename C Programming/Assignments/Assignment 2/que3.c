//Write a program to find greatest of three numbers using nested if-else.
#include<stdio.h>
void main(){
	int num1=10,num2=20,num3=30;
	if(num1>num2 && num1>num3){
		printf("num1 is greater");
	}
	else{
		if(num2>num3 && num2>1){
			printf("num2 is greater");
		}
		else{
			printf("num3 is greater");
		}
	}
}
