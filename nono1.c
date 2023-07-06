#include<stdio.h>
int pattern(int n)
{
	return n*n;
}
int main()
{
	int a;
	printf("enter a");
	scanf("%d",&a);
	printf("squre is %d",pattern(a));
}