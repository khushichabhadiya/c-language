\\recursion 5*4*3*2*1=120.
#include<stdio.h>
int fact(int n) 
{
	if(n==1)
	{
	return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
int main()
{
	int x;
	x=fact(10);
	printf("factorial is %d",x);
}