#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int x,y;
	clrscr();
	for(x=0;x<=20;x++)
		{
		 for(y=0;y<=50;y++)
			{
			 if(x==0||x==20||y==50||y==0||x==10&&y>=10&&y<=40)
			 printf("Z");
			 else
			 printf(" ");
			}
		 printf("\n");
		}
	getch();
}