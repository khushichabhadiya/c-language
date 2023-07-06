#include<stdio.h>
void main()
{
	int units;
	float bill,totalamt,charge;
	printf("%d",&units);
	scanf("%d",&units);
	if(units<100)
	{
		bill(units*60)/100;
		printf("%.2f",bill);
	}
	else if(units>100 && units>200)
	{
		bill(units*80)/100;
		printf("%.2f",&bill);
	}
	else if(units>100 && units>200)
	{
		bill(units*80)/100;
		printf("%.2f",&bill);
	}

	
}