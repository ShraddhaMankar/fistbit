//Write a program to check whether a given character is uppercase or lowercase.
#include<stdio.h>
void main(){
	char ch='a';
	if(ch>='A' && ch<='Z'){
		printf("Its upper case: %c",ch);
	}
	if(ch>='a' && ch<='z'){
		printf("Its lowercase case:%c",ch);
	}
}