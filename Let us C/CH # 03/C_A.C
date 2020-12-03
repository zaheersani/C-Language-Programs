#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	float h,a;
	for(int i=1;i<=10;i++)
		{
		 scanf("%f",&h);
		 a = (h-40)*12;
		 if(a>=0)
			printf("Employee %d get paid of Rs.%f",i,a);
		 else
			printf("Employee %d should not paid!",i);
		}
	getch();
}
