#include<stdio.h>
#include<conio.h>
main()
{
	int x=4,y=3,z;
	clrscr();
	z = x-- -y;
	printf("\n%d %d %d",x,y,z);
	getch();
	return 0;
}