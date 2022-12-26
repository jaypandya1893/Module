#include<stdio.h>

int main()
{
int i,no,ch=1;

printf("Enter Number:");
scanf("%d",&no);

for(i=1;i<=no;i++)
{
ch*=i;
}
printf("FACTORIAL OF %d:%d",no,ch);
return 0;
}
