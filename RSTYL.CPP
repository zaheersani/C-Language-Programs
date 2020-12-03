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
	if(y==0||x==0||y==20&&x>=0&&x<=10||x==10||y==2*x-20)
	printf("R");
	else
	printf(" ");
	}
	printf("\n");
	}
	getch();
}