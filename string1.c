\\length is 1   -----> output
#include<stdio.h>
int main()
{
	char str[20];
	printf("your string is",str);
	gets(str);
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	printf("\n length is %d",i);
}
	