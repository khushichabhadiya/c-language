//print 0.5,1,2.5...
#include<stdio.h>
void main()
{
	float j=0.5,i=0.5;
	int n;
	printf("enter eny number");
	scanf("%d",&n);
	printf("%d",&n);
	do
	{
		j=j+i;
		printf("%.1f",j);
		i++;
	}
		while(i<=n);
}