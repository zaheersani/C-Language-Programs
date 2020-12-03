#include<stdio.h>
#include<conio.h>
int i,j;
void welcome(int a)
{
	for(i=0;i<a;i++)
		{
		 printf("ZHS Bravo !!!\n");
		}
}
void main()
{
	clrscr();
	printf("Give a No.\n");
	scanf("%d",&j);
	welcome(j);
	getch();
/*	printf("Another\n");      /* For continuing function
	welcome(j/2);
	getch();   */
}