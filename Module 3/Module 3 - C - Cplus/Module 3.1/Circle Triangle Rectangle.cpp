#include<stdio.h>
int main()
{
int cho,b,h,r,l,w;
float area;

printf("\t *****************Menu***************** \n");
printf("\t 1. Triangle\n");
printf("\t 2. Cricle\n");
printf("\t 3. Rectangle\n");

printf("Select your choice:");
scanf("%d",&cho);

	if (cho==1)
	{
		printf("Enter Base & Height:");
		scanf("%d %d",&b,&h);
		area=(b*h)/2;
		printf("Area of Triangle:%.2f\n",area);
	}
	else if (cho==2)
	{
		printf("Enter radius of circle:");
		scanf("%d",&r);
		area=3.142*r*r;
		printf("Area of Triangle:%.2d\n",area);
	}
	else if (cho==3)
	{
		printf("Enter Length & Width:");
		scanf("%d %d",&l,&w);
		area=l*w;
		printf("Area of Rectangle:%.2d\n",area);
	}
	else
	{
			printf("Error");
	}
	return 0;
}
