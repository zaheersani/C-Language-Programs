#include<stdio.h>
#include<conio.h>
void main()
{
	int h,m,s,t;
	clrscr();
	printf("Enter time!\nHours=");
	scanf("%d",&h);
	printf("\nMinutes=");
	scanf("%d",&m);
	printf("\nSeconds=");
	scanf("%d",&s);
	t = h*60*60 + m*60 + s ;
	printf("\nTime in seconds = %d",t);
	getch();
}