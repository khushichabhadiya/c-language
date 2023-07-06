\\print 1,3,5,7,9...=25
#include<stdio.h>
void main()
{
	int i=1,total=0,n;
	printf("enter eny number");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2!=0)
		{
			total=total+i;
			printf("%d",i);
		}
		i++;
	}


	printf("\ntotal is %d",total);
}