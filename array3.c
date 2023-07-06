#include<stdio.h>
int main()
{
	
	int a[]={10,40,60,89,79,78},i;
	int b[]={20,45,67,77,88,88};

		for(i=0;i<5;i++){
		printf("\n %d",a[i]);
		printf("\t %d",b[i]);
		printf("\t %d", (a[i]+b[i]));
	}	
}