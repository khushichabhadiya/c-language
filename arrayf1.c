#include<stdio.h>
#define n 10
int dis(int a[]) 
{
	int max=a[0], min=a[0];
	for(int i=0;i<n;i++)
	{
	printf("%d ",a[i]);
	if(a[i]>max)
	{
		max=a[i];
	}
	if(a[i]<min)
	{
		min=a[i];
	}
	}
	printf("\nmaximum value %d",max);
	printf("\nminimum value %d",min);
	
}
int main()
{
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		printf("enter val");
		scanf("%d",&arr[i]);
	}
		dis(arr);
}
