\\maths   science english total   per
23      45      67      135     45.00   -----> output
#include<stdio.h>
int m,s,e,t;
float per;
int display()
{
	printf("maths\tscience\tenglish\ttotal\tper");
	printf("\n%d\t%d\t%d\t%d\t%.2f",m,s,e,t,per);
}

int calc()
{
	t=m+s+e;
	per=(float)t/3;
}

int setdata()
{
	printf("enter maths markes");
	scanf("%d",&m);
	printf("enter science markes");
	scanf("%d",&s);
	printf("enter english markes");
	scanf("%d",&e);
}

int main()
{
	setdata();
	calc();
	display();
}