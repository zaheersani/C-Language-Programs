#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int i;
	clrscr();
	for(i=0;i<=20;i++)
		{
		 gotoxy(60,6);          /*   x=columns & y=rows  */
		}
	delay(300);
	printf("T");
	for(i=0;i<=20;i++)
		{
		 gotoxy(61,6);
		}
	delay(300);
	printf("H");
	getch();
}