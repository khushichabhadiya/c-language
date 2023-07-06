#include<stdio.h>
int main()
{
	FILE *fp;
	fp= fopen("skill.txt","w+");
	fprintf(fp"welcome to skill qode -decode your skill here..\n");
	fputs("you are entering to learning c language...\n",fp);
	fputs("we are enjoying everywhre....",fp);
	fclose(fp);
}                                                                                                                                                                                                                                