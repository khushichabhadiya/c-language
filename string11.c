#include<stdio.h>
int amount(int n)
{
	int i, a[]={2000,500,200,50,20,10,5,2,1};
	for(int i=0;i<10;i++)
	
	{
		if(n>=a[i])
		{
		printf("%d:%d\n",a[i],(n/a[i]));
		n=n%a[i];
		}	
	}
}
int main()
{
	int amt; 
	printf("enter amount");
	scanf("%d",&amt);
	amount(amt);
}