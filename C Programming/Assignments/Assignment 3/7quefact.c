//Find factorial of given number.
//Input: n = 5
//Output: 120
#include<stdio.h>
void main(){
	int n=5;
	int i=n;
	int fact=1;
	while(i>1){
		fact=fact*i;
		i--;
	}
	printf("factorial number:%d",fact);
}