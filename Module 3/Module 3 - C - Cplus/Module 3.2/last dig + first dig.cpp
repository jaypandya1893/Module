#include<stdio.h>

int main()
{
int n,last,sum;
printf("Enter Number:");
scanf("%d",&n);

last=n%10;
while (n>=10)
{	
	n/=10;
	sum=last+n;

}
printf(" %d",sum);
return 0;
}

