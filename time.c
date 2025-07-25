//Write a C program to convert given minutes into hours and remaining minutes.
void main(){
	int min=200;
	int hrs;
	hrs=min/60;
	int remainmin=min%60;
	printf("minutes to hrs:%d and %d min",hrs,remainmin);
}