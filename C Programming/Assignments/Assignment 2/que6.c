//Accept a number and check if it is divisible by 3, 5, or both.
//(Print "Divisible by 3 but not by 5" or "Divisible by 5 but not by 3" or "Divisible by
//both" or” Divisible by None”)
#include<stdio.h>
void main(){
	int num=33;
	if(num%3==0){
		printf("divisible by 3");
	}
	else{
		if(num%5==0)
		{
			printf("divisible by 5");
		}
		else{
			if(num%3==0 || num%5==0)
			{
				printf("divible by both");
			}
			else{
				printf("None");
			}
		}
	}
}