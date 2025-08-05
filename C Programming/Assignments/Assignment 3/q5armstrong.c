//Check the given number is Armstrong number or not..
//Input: n = 153
//Output: Armstrong

#include<stdio.h>
void main(){
	int n=153;
	int sum=0;
	int temp=n;
	while(n>0){
		int rem=n%10;
		sum=sum+rem*rem*rem;
		n=n/10;
	}
	if(temp==sum){
		printf("armstrong number");
	}
		else{
		printf("not armstrong number");
	}
}