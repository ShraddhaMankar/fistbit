//Print armstrong numbers in the given range 1 to n.
#include<stdio.h>
void main(){
	int n;
	printf("enter nummber:");
	scanf("%d",&n);
	printf("Armstrong numbers from 1 to %d are:\n", n);
	for(int i=1;i<=n;i++){
		int sum=0;
	    int temp=i;
	    while(temp>0){
	    int rem=temp%10;
		sum=sum+rem*rem*rem;
		temp=temp/10;
	}
	if(sum==i){
		printf(" %d", i);
	}
    }
	
}