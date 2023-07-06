#include<stdio.h>
void main()
{
	int arr[5][5],i,j,diagonal=0,upper=0,lower=0;
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			printf("enter arr[%d][%d]",i,j);
			scanf("%d",&arr[i][j]);
		}
	}	
	for(j=0; j<4; i++)
	{
		for(j=0; j<4; j++)
		{
			printf("%d",&arr[i][j]);
			if(i==j)
			{
			diagonal=diagonal+arr[i][j];
			}
			else if(i<j)
			{
			upper=upper+arr[i][j];
			}
			else
			{
			lower=lower+arr[i][j];
			}	
			}
			printf("\n");
			}
			printf("diagonal total is %d",diagonal);
			printf("upper total is %d",upper);
			printf("lower total is %d",lower);
	
}