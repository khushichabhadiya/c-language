#include<stdio.h>
void main()
{
	int a[5],b[5],c[5],d[5],i,total,per,grade;
	
		for(i=0; i<5; i++)
		{
		printf("\n enter hindi marks[%d]",i);
		scanf("%d",&a[i]);

		}
		printf("\n");
		for(i=0; i<5; i++)
		{
		printf(" enter maths marks[%d]",i);
		scanf("%d",&b[i]);
		}
				printf("\n");
				for(i=0; i<5; i++)
					{
					printf(" enter gujrati marks[%d]",i);
					scanf("%d",&c[i]);
					}
					printf("\n");
						for(i=0; i<5; i++)
						{
						printf(" enter english marks[%d]",i);
						scanf("%d",&d[i]);
						}

						printf("\n");
						printf("\nhindi\tmaths\tgujrati\tenglish\ttotal\tper(%)\tgrade");
						for(i=0; i<5; i++)
							{
							total=a[i]+b[i]+c[i]+d[i];
							per=total * 100/400;
							
							printf("\n%d\t%d\t%d\t%d\t%d\t%d\t",a[i],b[i],c[i],d[i],total,per,grade);
							if([i]<=35)
							{
								printf("\t%s","fail");
							}
								else if(b[i]<=35)
							{
								printf("\t%s",fail);
							}
								else if(c[i]<=35)
							{
								printf("\t%s",fail);
							}
								else if(d[i]<=35)
							{
								printf("\t%s",fail);
							}
								if(per>75)
							{
								printf("%c",'A');
							}
								else if(per>=60 && per<=75)
							{
								printf("%c",'B');
							}
								else if(per>=45 && per<=60)
							{
								printf("%c",'C');
							}
								else if(per>=35 && per<=45)
							{
								printf ("%c",'D');
							}
								else
							{
								printf("%s","fail");
							}
							
}
				
