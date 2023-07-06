#include<stdio.h>
int loop(int j)
{
	int i,n;
	printf("enter eny number");
	scanf("%d",&n);
	for(i=2; i<=10; i+=2)
	{
		printf("%d",i);
	}
}
int main()
{
	int a;
	printf("enter a");
	scanf("%d",&a);
	loop(a);
}