\\print 2,4,6,8...
#include<stdio.h>
void main()
{
	int i=1,total=0,n;
	printf("enter eny number");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==0)
		{
			total=total+i;
			printf("%d",i);
		}
		i++;
	}


	printf("\ntotal is %dtotal",total);
}