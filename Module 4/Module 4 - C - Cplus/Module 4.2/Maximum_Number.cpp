#include<stdio.h>
#define max_size 100

class input
{
	public:
		
	int arr[max_size];
	int size;
	int i,j,temp;
	void inputmain()
	{
	printf("Enter size of array:");
	scanf("%d",&size);
    }
};

class outp : public input
{
	public:
	void output()
	{
	for(i=0;i<size;i++)
	{
	printf("Enter elements in array:");
	scanf("%d",&arr[i]);
	}
	temp=arr[0];
	
	for(i=0;i<size;i++)
	{
		if(temp<arr[i])
		{
			temp=arr[i];
		}
	}

printf("Maximum Number: %d",temp);
}
};

main()
{
	outp o;
	o.inputmain();
	o.output();
}
