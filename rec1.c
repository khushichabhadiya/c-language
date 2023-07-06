#include<stdio.h>
int main(int n)
{
	printf("unwinding phase %d",n);
	if(n<3)
	{
		fun(++n);
	}
	else
{
		printf("winding phase %d",n);
}
}
int main()
{
	fun();
}