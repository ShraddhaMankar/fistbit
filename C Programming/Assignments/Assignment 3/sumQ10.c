//Find Sum of first and last digit of given number.
//Input: n = 12345
//Output: 6 (1 + 5)
#include<stdio.h>
void main(){
	int n=12345;
	int rem;
	int num=n%10;
	while(n>10){
		n=n/10;
	}
	int sum=n+num;
	printf("sum first and last digit: %d",sum);
}