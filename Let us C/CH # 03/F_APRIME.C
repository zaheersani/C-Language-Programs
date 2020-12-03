#include<stdio.h>
#include<conio.h>
main()
{
	int x,y;
	clrscr();
	for(x=1;x<=300;x++)
		{
		 for(y=1;y<=300;y++)
		 if(x/y == x || x%y == 0)
			{
			 printf("\n%d",x);
			}
		}
	getch();
	return 0;
}