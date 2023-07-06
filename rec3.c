#include<stdio.h>
int fibo(int j)
{
	if(j==0)
	{
		return 1;
	}
	else if(j==1)
	{
		
	}	
	else
	{
		return fibp(j-1)+fibo(j-2);
	}
}
int main()
{
	int x;
	printf("enter a number");
	scanf("%d",&x);
	for(i=0; i<x; i++)
	{
		printf("%d",fibo(i));
	}
}