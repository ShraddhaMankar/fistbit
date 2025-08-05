//Check the given number is prime or not.
//Input: n = 7
//Output: Prime

#include<stdio.h>
void main(){
	int n=7,i=2,status=0;
	while(i<=n/2)
	{
		if(n%i==2)
		{
		status=1;
		break;
	}
	i++;
	}
	if(status==0){
		printf("Prime number");
	}
	else{
		printf("not prime");
	}
}