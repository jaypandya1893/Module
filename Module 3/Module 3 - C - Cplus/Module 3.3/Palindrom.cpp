#include<stdio.h>>
#include<string.h>

int main()
{
	char str[100],chr[100];
	
	printf("Enter Yor string:");
	gets(str);
	
	
	if (strcmp(str,strrev(str))==0)
		{
			printf("\nThis string is Palindrome\n");
	    }
	else
	{
		printf("\nIncorrect Palindrom\n");
	}
	return 0;
}
