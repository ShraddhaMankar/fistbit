//WAP TO CAL ELECTRICITY BILL
//for 1-50 units-30rs/unit,for 51-150 units-40 rs/unit. for 151 and above units-50 rs/unit
#include<stdio.h>
void main(){
	int bill=0,unit;
	printf("enter units:");
	scanf("%d",&unit);
	if(unit<=50){
		bill=unit*30;
		printf("%d for unit 1-50",bill);
	}
	else if(unit<=150){
		bill=unit*40;
		printf("%d for unit 51-150",bill);
	}
	else{
		bill=unit*50;
		printf("%d for unit 51-150",bill);
	}
}