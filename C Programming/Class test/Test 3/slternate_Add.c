#include<stdio.h>
void main(){
	int start,end,sum=0;
	printf("enter the start number");
	scanf("%d",&start);
	printf("enter the end number");
	scanf("%d",&end);
	while(start<=end){
		if(start%2!=0){
		sum=sum+start;
		
	}
	start++;
}
	printf("%d",sum);

}