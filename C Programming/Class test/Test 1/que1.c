//convert the time entered in hrs,min,sec into total second
#include<stdio.h>
void main(){
	int hh=2,min=2,sec=80;
	int totaltime=((hh*3600)+(min*60)+sec);
	printf("time:%d",totaltime);
}