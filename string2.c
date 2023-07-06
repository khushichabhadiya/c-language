#include<stdio.h>
int main()
{
	char str[22],arr[22]
	int i,j,k=0;
	printf("enter string");
	gets(str);
	printf("your string is %d",str);
	int i=0;
	while(str[i]!='\0')
	{
		i++;
		j=k;	
	}
	for(k=0; k<i; k++)
	{
	arr[k]=str[--j];
	}
		arr[k]='\0';
		printf("\n length is %s",arr);
}