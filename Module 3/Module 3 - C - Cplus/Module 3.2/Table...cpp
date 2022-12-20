#include<stdio.h>

int main()
{
int i,a,mult;
printf("Enter the value");
scanf("%d",&a);

for(i=1;i<=10;i++)
{
mult=a*i;
	
printf("%i x %i = %i\n ",a,i,mult);
}
return 0;
}
