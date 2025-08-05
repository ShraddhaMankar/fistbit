//Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
//desired operations.
#include<stdio.h>
void main(){
	int num1=10,num2=5;
	char oprator='-';
	if(oprator=='+'){
		printf("addition:%d",num1+num2);
	}
	else{
		if(oprator=='-'){
			printf("substraction:%d",num1-num2);	
		}
		else{
			if(oprator=='/'){
			printf("quotient:%d",num1-num2);	
			}
			else{
				if(oprator=='*'){
					printf("mul:%d",num1*num2);
				}
				else{
					if(oprator=='%'){
					printf("div:%d",num1%num2);
				}
				else{
					printf("");
				}
				}
			}
		}
		
	}
}