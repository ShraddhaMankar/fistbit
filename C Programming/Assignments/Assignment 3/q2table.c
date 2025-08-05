//Print table for given number.
//Input: n = 5
//Output: 5 10 15 20 25 30 35 40 45 50
#include<stdio.h>
void main(){
	int n=1;
	while(n<=10){
		int res=n*5;
		printf("%d \n",res);
		n++;
	}
}