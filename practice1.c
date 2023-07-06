#include<stdio.h>
void main()
{
	int a;
	printf("enter a");
	scanf("%d",&a);
	if(a % 15==0)
	{
		printf("%d is divisible 5 and 3");
	}
	else
	{
		printf("%d is not divisible 5 and 3");
	}
}