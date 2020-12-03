#include<stdio.h>
#include<conio.h>
int x,y;
void main()
{
	clrscr();
	for(y=0;y<=20;y++)
		{
		 for(x=0;x<=20;x++)
			{
			 if(y==0||y==20||y==-x+20)
			 printf("Z");
			 else
			 printf(" ");
			}
		 for(x=30;x<=55;x++)
			{
			 if(x==35||x==55||y==10&&x>=35)
			 printf("H");
			 else
			 printf(" ");
			}
		 for(x=60;x<=90;x++)
			{
			 if((y==0||y==10||y==20)&&x>=65||x==65&&y<=10||x==90&&y>=10)
			 printf("S");
			 else
			 printf(" ");
			}
		 printf("\n");
		}
	getch();
}









