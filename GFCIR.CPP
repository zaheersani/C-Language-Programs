#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int i,x,y,g,h;
	g=DETECT;
	initgraph(&g,&h,"");
	x=getmaxx();
	y=getmaxy();
	setbkcolor(4);
	bar(5,50,630,55);
	setcolor(8);
	line(5,60,630,60);
	setcolor(2);
	settextstyle(0,0,2);
	outtextxy(200,70,"CONGRATULATIONS");
	setcolor(1);
	rectangle(0,0,x-1,y-1);
	for(i=0;i<10;i++)
		{
		 circle(x/2,y/2,70+i);
		}
	ellipse(x/2,y/2,31,30,20,40);
	ellipse(x/2,y/2,31,30,40,20);
	getch();
	closegraph();
}