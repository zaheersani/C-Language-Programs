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
	if(x==0||x==-y||x==-y+20||x==y+20||x==20)
	printf("Z");
	else
	printf(" ");
	}
	printf("\n");
	}
	getch();
	for(x=0;x<=20;x++)
	{
	for(y=30;y<=50;y++)
	{
	if(y==30||x==10||y==50)
	printf("H");
	else
	printf(" ");
	}
	printf("\n");
	}
	getch();
	for(x=0;x<=20;x++)
	{
	for(y=60;y<=80;y++)
	{
	if(x==0||x==10||y==80&&x>=10&&x<=20||y==60&&x>=0&&x<=10||x==20)
	printf("S");
	else
	printf(" ");
	}
	printf("\n");
	}
	getch();
	}