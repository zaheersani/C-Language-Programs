#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void mat(int,int);
void moin(void);
void tabi(void);
void main(void)
{
int d,m,x,y,f,e[3][3],v=1;
d=DETECT;
textmode(BW40);
cprintf("ENTER THE VALUES OF MATRIX COLOM VISE\n");
for(int a=0;a<3;a++)
for(int b=0;b<3;b++)
scanf("%d",&e[a][b]);
clrscr();
cprintf("\tSELECT THE OPTION AS UNDER\n\r\t1.SORTING THE MATRIX\n\r\t2.SUM THE DIGONAL LEFT TO RITE\n\r\t3.SUM OF DIGONAL RIGHT TO LEFT");
int w;
scanf("%d",&w);
cprintf("THE MATRIX YOU ENTERED IS");
printf("\x07");
delay(1000);
printf("\x07");
initgraph(&d,&m,"c:\\tc\\bgi");
mat(40,40);
printf("\n\n\n   ");
for(a=0;a<3;a++)
{
	for(b=0;b<3;b++)
	printf("   %d",e[a][b]);
	printf("\n\n\n   ");}
	switch(w)
		{
		 case 1:
		 int i;
		 for(a=0;a<8;a++)
		 for(b=0;b<3;b++)
			{
			if(a>0)
			if(e[b][0]>e[b-1][0])
				{
				i=e[b][0];
				e[b][0]=e[b-1][0];
				e[b-1][0]=i;
				}
			for(int j=0;j<3;j++)
			if(e[b][j]>e[b][j-1])
				{
				i=e[b][j];
				e[b][j]=e[b][j-1];
				e[b][j-1]=i;
				}
			}
			moveto(50,180);
		settextstyle(BOLD_FONT,HORIZ_DIR,v);
		outtext("THE DESENDING ORDER OF");
		moveto(100,220);
		outtext(" ABOVE MATRIX IS");
		mat(180,280);
		printf("\n\n\n\n\n\n\t\t     ");
		for(a=0;a<3;a++)
			{
			 for(b=0;b<3;b++)
			 printf("   %d",e[a][b]);
			 printf("\n\n\n\t\t     ");
			}
		break;
		case 2:
		moin();
		x=e[0][0]+e[1][1]+e[2][2];
		moveto(70,200);
		settextstyle(BOLD_FONT,HORIZ_DIR,v);
		outtext("THE SUM OF HEIGHLIGHT DIGONAL IS ");
		printf("\n\n\n\n\n\t\t%d",x);
		break;
		case 3:
		tabi();
		x=e[0][2]+e[1][1]+e[2][0];
		settextstyle(BOLD_FONT,HORIZ_DIR,v);
		moveto(70,200);
		outtext("THE SUM OF HEIGHLIGHT DIGONAL IS ");
		printf("\n\n\n\n\n\t\t%d",x);
		break;
	}
	getch();
	closegraph();
}
	void mat(int k,int l)
		{
		moveto(k,l);
		lineto(k-10,l);
		lineto(k-10,l+135);
		lineto(k,l+135);
		moveto(k+80,l);
		lineto(k+90,l);
		lineto(k+90,l+135);
		lineto(k+80,l+135);
		}
	void moin(void)
		{
		int x,y,dx=2,dy=2,i=0;
		unsigned char b[2000];
		x=42;
		y=38;
		setcolor(LIGHTGREEN);
		setfillstyle(SOLID_FILL,LIGHTGREEN);
		moveto(40,40);
		circle(x,y,10);
		floodfill(x,y,LIGHTGREEN);
		getimage(x-10,y-10,x+10,y+10,b);
		dx=2;
		dy=3;
		while(i<38)
			{
			 i++;
			 delay(50);
			 putimage(x-10,y-10,b,OR_PUT);
			 x+=dx;
			 y+=dy;
			}
}
	void tabi(void)
		{
		int x,y,dx=2,dy=2,i=0;
		unsigned char b[2000];
		x=115;
		y=49;
		setcolor(LIGHTGREEN);
		setfillstyle(SOLID_FILL,LIGHTGREEN);
		moveto(40,40);
		circle(x,y,10);
		floodfill(x,y,LIGHTGREEN);
		getimage(x-10,y-10,x+10,y+10,b);
		dx=2;
		dy=3;
		while(i<38)
			{
			 i++;
			 delay(50);
			 putimage(x-10,y-10,b,OR_PUT);
			 x-=dx;y+=dy;
			}
		}