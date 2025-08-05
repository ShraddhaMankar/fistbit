//Accept three sides of a triangle from the user and determine whether the triangle is
//equilateral, isosceles, or scalene.
#include<stdio.h>
void main(){
	int s1=30,s2=10,s3=20;
	if(s1==s2&&s2==s3){
		printf("equilateral");
	}
	else if(s1==s2|| s2==s3 || s1==s3){
		printf("isosceles");
	}
	else{
		printf("scalene");
	}
}