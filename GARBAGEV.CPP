#include<stdio.h>
#include<conio.h>
main()
{
	// Garbage value of an Integer
	int a,x,y;
	clrscr();
	scanf("%d",&x);
	y = 32768 - x ;
	a = -32768 - y;
	printf("%d",a);
	getch();
	return 0;
}