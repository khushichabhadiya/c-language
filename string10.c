#include<stdio.h>
int revers(int n)
{
	int revers=0;
	
	while(n!=0)
	{
	revers = revers*10 + (n%10);
	n = n/10;
	}
	printf("Reverse no: %d",revers);
	
}
int main()
{
	int x;
	printf("enter x");
	scanf("%d",&x);
	revers(x);
}
 