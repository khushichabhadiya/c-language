#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter the value a");
	scanf("%d",&a);
	printf("enter the value b");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("b is %d",b);
	printf("a is %d",a);
}