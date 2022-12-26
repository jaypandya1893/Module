#include<stdio.h>
#include<string.h>

int main()
{
	char fre,freq=0,str[100];
	int i,count=0,sum=0,vow=0,small=0,cap=0,dig=0;
	
	printf("Enter Yor string:");
	gets(str);
	
	for (i=0;str[i]!='\0';i++)	
{
	if (str[i]>='a' && str[i]<='z')
		{
			small++;
	    }
    else if (str[i]>='A' && str[i]<='Z')
		{
			cap++;
		}
    else 
        {
    	     dig++; 
        }
}
sum=small+cap+dig;	

printf("Total Character:%d\n",sum);

}

