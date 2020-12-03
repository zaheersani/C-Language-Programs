#include<stdio.h>
#include<conio.h>
void main()
{
	int a,c=1,d;
	clrscr();
	scanf("%d",&a);
	d=a;
	while(c<d)
		{
		a=a*c;
		c++;
		}
	printf("\n%d",a);
	getch();
}