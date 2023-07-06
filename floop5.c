#include<stdio.h>
int khushi()
{
	int i,total=0;
	for(i=1; i<=10; i++)
	{
		total=total+i;
		printf("%d",i);
	}
		return total;
}
int main()
{
	int total=khushi();
	printf("\ntotal is total%d",total);
}