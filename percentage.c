//Write a C program to input marks of five subjects, find the total marks, and calculate
//the percentage.
void main(){
	int sub1=99,sub2=88,sub3=89,sub4=90,sub5=93,total;
	total=(sub1+sub2+sub3+sub4+sub5);
	double avg=total/5;
	printf("Percentage:%lf",avg);
}