#include<stdio.h>
int main()
{
	int a;
	printf ("Enter The Days In Between  1 to 7 Numbers:");
	scanf ("%d",&a);
	
	if (a==7)
	{
		printf (" Sunday");
	}
	else if (a==1)
	{
		printf (" Monday");
	}
	else if (a==2)
	{
		printf (" Tuesday");
	}
	else if (a==3)
	{
		printf (" Wednesday");
	}
	else if (a==4)
	{
		printf (" Thrusday");
	}
	else if (a==5)
	{
		printf (" Friday");
	}
	else if (a==6)
	{
		printf (" Saturday");
	}
	else
	{
		printf ("Enter vallied Number");
	}
	return 0;
}
