#include<stdio.h>

int main()
{
int a,c,b;
{
printf("----------MENU----------\n\n");
printf("\t1.Addition\n");
printf("\t2.Subtraction\n");
printf("\t3.Multipliction\n");
printf("\t4.Division\n");
printf("\t5.Module\n");
printf("\t6.Exit\n\n\n");

printf("Enter Your Choice From MENU:  ");
scanf("%d",&a);
}

switch (a)
{
case 1:
printf("Enter Two number for addition:");
scanf("%d   %d", &b,&c);
b=b+c;
printf("Addition:%d\n\n",b);
break;

case 2:
printf("Enter Two number for Subtraction:");
scanf("%d   %d", &b,&c);
b=b-c;
printf("Subtraction:%d\n\n",b);
break;

case 3:
printf("Enter Two number for Multiplication:");
scanf("%d   %d", &b,&c);
b=b*c;
printf("Multiplication:%d\n\n",b);
break;

case 4:
printf("Enter Two number for Division:");
scanf("%d   %d", &b,&c);
b=b/c;
printf("Division:%d\n\n",b);
break;

case 5:
printf("Enter Two number for Module:");
scanf("%d   %d", &b,&c);
b=b%c;
printf("Module:%d\n\n",b);
break;

default:
printf("\nExit");
break;
}
return 0;
}
