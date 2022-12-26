#include<stdio.h>
#define max_size 100

int main()
{
	int arr[max_size];
	int size;
	int i,j,temp;
	
	printf("Enter size of array:");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
	printf("Enter elements in array:");
	scanf("%d",&arr[i]);
	}
	
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	printf("\n Elements of array in ascending order:");
	
		for(i=0;i<size;i++)
		{
			printf("%d\t",arr[i]);
		}
		
		printf("\n Elements of array in descending order:");
	
		for(i=size-1;i>=0;i--)
		{
			printf("%d\t",arr[i]);
		}
	return 0;
}


