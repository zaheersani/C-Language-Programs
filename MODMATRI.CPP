#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float a,b,c,d,e,f,g,h,i,x;
	clrscr();
	printf("Put the values of matrix 3X3\n");
	gotoxy(1,3);
	scanf("%f",&a);
	gotoxy(5,3);
	scanf("%f",&b);
	gotoxy(9,3);
	scanf("%f",&c);
	gotoxy(1,5);
	scanf("%f",&d);
	gotoxy(5,5);
	scanf("%f",&e);
	gotoxy(9,5);
	scanf("%f",&f);
	gotoxy(1,7);
	scanf("%f",&g);
	gotoxy(5,7);
	scanf("%f",&h);
	gotoxy(9,7);
	scanf("%f",&i);
	x = a*(e*i-h*f)-b*(d*i-f*g)+c*(d*h-e*g);
	printf("\n\nThe mod is %.2f",x);
	getch();
}
