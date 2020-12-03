#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int x;
	clrscr();
	for(x=2;x<70;x=x+1)
		{
		 gotoxy(x,5);
		 printf("ZHS Bravo");
		 delay(100);
		 clrscr();
		}
	for(x=73;x>0;x--)
		{
		 gotoxy(x,10);
		 printf("Zaheer");
		 delay(100);
		 clrscr();
		}
}