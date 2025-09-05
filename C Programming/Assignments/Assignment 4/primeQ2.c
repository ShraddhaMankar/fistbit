#include<stdio.h>
void main()
{
	int n;
	printf("Enter the number");
	scanf("%d",&n);
	printf("prime numbers from 1 to %d are:\n", n);
	for(int i=2;i<=n;i++)
	{
		int status=0;//status are value assign in zero when status is zero then prime number
	    for(int j=2;j<=i/2;j++)//no is spliting the range
	
	    {
		
		if(i%j==0)
		{
			status=1; //no prime
			break;
		}
		
    }
	if(status==0) //prime
	{
		printf("%d prime number \n",i);
		
	}
	else {
		printf("%d not prime \n",i);
	}
}
}


//OR

//#include <stdio.h>
//void main() {
//    int n, i, j, isPrime;
//    printf("Enter the value of n: ");
//    scanf("%d", &n);
//    printf("Prime numbers between 1 and %d are:\n", n);
//    for(i = 2; i <= n; i++) {
//        isPrime = 1;
//        for(j = 2; j < i; j++) {
//            if(i % j == 0) {
//                isPrime = 0;
//                break;
//            }
//        }
//        if(isPrime) {
//            printf("%d ", i);
//        }
//    }
}

