#include<stdio.h>
void main()
{
	int arr[5],i,n,max,min,sum;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		max=arr[0];
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	for(i=0;i<n;i++)
	{
		min=arr[0];
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	sum=max+min;
	printf("%d",sum);
	
}
