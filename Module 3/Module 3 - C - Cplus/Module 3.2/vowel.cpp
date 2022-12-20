#include<stdio.h>
int main()
{
char ans;
	
	printf("Enter Vowel:");
	scanf("%c",&ans);
	
	switch (ans)
	{
		case 'a': printf("is vowel");
		break;
		case 'e': printf("is vowel");
		break;
		case 'i': printf("is vowel");
		break;
		case 'o': printf("is vowel");
		break;
		case 'u': printf("is vowel");
		break;
		default: printf("is not vowel");
		break;
	}
return 0;	
}
