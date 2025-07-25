//sum of 3 digits
void main(){
	int no=678;
	int sum,no1,no2,no3,q;
    no1=no%10;
    printf("no1:%d ",no1);
    q=no/10;
    printf("q:%d ",q);
    no2=q%10;
    printf("no2: %d ",no2);
    no3=q/10;
    printf("no3: %d ",no3);
    sum=no1+no2+no3;
    printf("final number is:%d",sum);    
}