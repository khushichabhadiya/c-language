//print 1,1,1,1,1...
#include<stdio.h>
void main()
{
	int i=1,x;
	while(i<=10)
	{
		x=1;
		while(x<=5)
		{
			printf("%d",i);
			x++;
		}
		printf("\n");
		i+=2;
	}
}