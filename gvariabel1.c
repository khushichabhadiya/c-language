#include<stdio.h>
int display(int maths,int science,int english,int total,float per)
{
	printf("maths\tscience\tenglish\ttotal\tper");
	printf("\n%d\t%d\t%d\t%d\t%.2f",maths,science,english,total,per);
}
int calc(int maths,int science,int english)
{
	int total;
	float per;
	total=maths+science+english;
	per=(float)total/3;
	display(maths,science,english,total,per);
}
int setdata()
{
	int maths,science,english;
	printf("enter maths markes");
	scanf("%d",&maths);
	printf("enter science markes");
	scanf("%d",&science);
	printf("enter english markes");
	scanf("%d",&english);
	calc(maths,science,english);
}
int main()
{
	setdata();
}