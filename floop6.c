#include<stdio.h>
int khushi()
{
	int i,n,total=0;
	for(i=2; i<=10; i+=2)
	{
		total=total+i;
		printf("%d",i);
	}
		return total;
}
int main()
{
	int total=khushi();
	printf("total is total %d",total);
}