//Write a program to check given 3 digit number is pallindrome or not.
#include<stdio.h>
void main(){
	int no=121;
	int r1,r2,r3,rev;
	int q1;
	
	r1=no%10;
	q1=no/10;
	r2=q1%10;
	r3=q1/10;
	
	rev=r1*100+r2*10+r3;
	printf("palindrom:%d ",rev);
	
	if(no==rev){
		printf("palindrome num:%d",rev);
	}
	else{
		printf("not palindrome:");
	}
}