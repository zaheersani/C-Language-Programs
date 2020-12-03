#include<stdio.h>
#include<conio.h>
void main()
{
	int a,c=1,d,b;
	clrscr();
	scanf("%d %d",&a,&b);
	d=a;
	while(c<b)
		{
		a=d*a;
		c++;
		}
	printf("\n%d",a);
	getch();
}