#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
	clrscr();
	for(int a=0;a<=5;a++)
	{
//	delay(500);
	gotoxy(5,5);
      //	}
	for(int x=0;x<=20;x++)
		{
		for(int y=0;y<=20;y++)
			{
			if(x==10||(x==y-10&&x>=8&&x<=10)||
			(x==-y+30&&x>=10&&x<=12))
			{
			printf("*");
			}
			else
			printf(" ");

			}
		printf("\n");
		}
		delay(500);
}
	getch();
}