#include<stdio.h>
int main()
 
 {
 	float a,year,month,days;
 	printf("Enter Days:");
 	scanf("%f",&a);
 	year=(a*1)/365;
 	month=(year*12)/1;
 	days=(month*365)/12;
 	printf("Total Year:%.2f\n ",year);
 	printf("Total Month:%.2f\n",month);
 	printf("Total Days:%.2f\n ",days);
 	return 0;
 }
 


