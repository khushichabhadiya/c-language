#include<stdio.h>
int pattern(int n)
{
	int i,j;
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
	{
		printf("* ");
	}
		printf("\n");
	}		
}
int main()
{
	int a;
	printf("enter a");
	scanf("%d",&a);
	pattern(a);
}