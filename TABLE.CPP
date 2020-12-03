#include<stdio.h>
#include<conio.h>
void main()
{
	int i,k;
	clrscr();
	printf("Give table of = ");
	scanf("%d",&i);
	for(k=1;k<=10;k++)
		{
		 printf("\n%d X %d = %d\n",i,k,k*i);
		}
	getch();
}