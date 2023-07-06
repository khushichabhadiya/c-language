#include<stdio.h>
int loop( int j)
{
	int a=1,b=1,c,i,n;
	printf("enter eny number");
	scanf("%d",&n);
	printf("%d",a);
	printf("%d",b);
	for(i=1; i<=n; i++)
	{
		c=a+b;
		printf("%d",c);
		a=b; 
		b=c;
	}
}
int main()
{
	int a; 	
	printf("enter a");
	scanf("%d",&a);
	loop (a);
}