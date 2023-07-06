#include<stdio.h>
int loop(int n)
{
	int i;
	for(i=1; i<=n; i++)
	{
		printf("%d",i);
	}
		printf("\n");
}
int main()
{
	int a;
	printf("enter a");
	scanf("%d",&a);
	loop(a);
	
}