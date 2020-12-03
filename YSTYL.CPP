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
	if(x==y&&y>=0&&y<=10||x==-y+20&&x>=0&&x<=10||y==10&&x>=10&&x<=20)
	printf("Y");
	else
	printf(" ");
	}
	printf("\n");
	}
	getch();
}