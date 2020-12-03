#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	clrscr();
	for(x=0;x<=20;x++)
		{
		 for(y=0;y<=20;y++)
			{
			 if(x==10&&y>=5&&y<=15||x==-2*y+20||x==2*y-20)
			 printf("A");
			 else
			 printf(" ");
			}
		  printf("\n");
		}
	getch();
}

