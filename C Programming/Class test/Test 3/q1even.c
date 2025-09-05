//WAP print even and odd no. in a given range
//eg. i/p:start =10,end=25
#include<stdio.h>
void main(){
	int start,end;
	printf("enter the start number");
	scanf("%d",&start);
	printf("enter the end number");
	scanf("%d",&end);
	while(start<=end){
		if(start%2==0){
			printf("%d",start);
			
		}	
		start++;
	}
	printf("enter the start number");
	scanf("%d",&start);
	printf("enter the end number");
	scanf("%d",&end);
	while(start<=end){
		if(start%2!=0){
			printf("%d",start);
			
		}	
		start++;
	}
}