#include<stdio.h>
#include<conio.h>
void main()
{
	int a,*b;
	clrscr();
	a=34;
	b=&a;
	printf("%d %d",a,&a);
	printf("%d %d",b,*b);
	getch();
}