//Check the given number is Perfect number or not.
//Input: n = 28
//Output: Perfect
//perfect code logic i.e nummber are divide by which which number and those numbers addition
//that means 28:[1,2,4,7,14(1+2+4+7+14=28)]
#include<stdio.h>
void main(){
	int n=28,i=1;
	int sum=0;
	while(i<n){
		if(n%i==0){
		sum=sum+i;
	}
	i++;
	}
	if(sum==n){
		printf("perfect number");
	}
	else{
		printf("not perfect");
	}
}