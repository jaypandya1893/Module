#include<stdio.h>
#include<string.h>

void Total (int price,int qty);
void menu();
int pcall=0;
void menu()
{	

	    printf("-------------MENU-------------\n\n");
        printf("\tPRODUCT   \tPRICE (per/kg)\n\n");
	    printf("\t1.APPLE \t : 90 Rs\n");
        printf("\t2.ORANGE\t : 80 Rs\n");
        printf("\t3.MANGO \t : 120 Rs\n");
        printf("\t4.BANANA\t : 40 Rs\n");
        printf("\t5.GRAPES\t : 30 Rs\n\n");
        
        int a;
printf("Enter Your Choice From MENU:  ");
scanf("%i",&a);
switch(a)
{
int qty,price;
	case 1: 
	    price=90;
        printf("YOU WANT TO BUY APPLE \n");
        printf("Enter QTY in kg : ");
        scanf ("%d",&qty);
        Total(price,qty);
        break;
	case 2: 
	    price=80;
		printf("YOU WANT TO BUY ORANGE");
		printf("Enter QTY in kg :");
        scanf ("%d",&qty);
        Total(price,qty);
		break;
	case 3: 
	    printf("YOU WANT TO BUY MANGO");
	    printf("Enter QTY in kg : ");
        scanf ("%d",&qty);
    	price=120;
        Total(price,qty);
        break;
	case 4: 
	    printf("YOU WANT TO BUY BANANA");
	    printf("Enter QTY in kg : ");
        scanf ("%d",&qty);
		price=40;
        Total(price,qty);
        break;
	case 5: 
	    printf("YOU WANT TO BUY GRAPES");
		printf("Enter QTY in kg : ");
        scanf ("%d",&qty);
		price=30;
        Total(price,qty);
        break;
	default: printf("Enter vellied value");
		break;
}
}

void Total (int price,int qty)
{
	int call;
	char cv[10];
	call=price*qty;
	pcall=call+pcall;
	printf("Amount In RS. : %d\n",call);
	printf("Total Amount In RS. : %d\n",pcall);
	
	printf("Do You Want To ADD More [y/n]: ");
	scanf("%s",&cv);
	
	if(!strcmp(cv,"y"))
	{
	menu();
	}
	else
	{
		printf("Thank You");
	}
}

int main()
{
	
	menu();

}


