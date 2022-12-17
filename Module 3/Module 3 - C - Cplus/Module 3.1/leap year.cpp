#include<stdio.h>
int main()
{
	int a,total;
	printf("Enter the YEAR:");
	scanf("%d",&a);
	total=a%4;
	
	if (total==0)
	{
		printf("This is leap year");
	}
	else
	{
		printf("This is not a leap year");
	}
	return 0;
}
