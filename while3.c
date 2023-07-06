\\print 1,2,3,4,5..
#include<stdio.h>
int main()
{
	int i,n;
	i=1;
	printf("enter eny number");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d",i);
		i++;
	}
}