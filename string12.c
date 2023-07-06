#include<stdio.h>
int perfect(int x)
{
	int i,total=0; 	
	for(i=1;i<x;i++)
	{
		if(x%i==0)
		{
			printf("%d",i);
			total=total+i;
		}
		
	}
		if(total==x)
		{
			printf("number is perfect %d",total);
		}
		else
		{
			printf("number is not perfect" );
		}
		
}
int main()
{
	int a;
	printf("enter a number");
	scanf("%d",&a);
	perfect(a);
}