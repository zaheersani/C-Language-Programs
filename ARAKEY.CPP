#include<stdio.h>
#include<conio.h>
			  /* For Array from Keyboard */
void main()
{
	int i,A[10];
	clrscr();
	for(i=1;i<=10;i++)
	{
	A[i]=i*i;
	}
	for(i=1;i<=10;i++)
	{
	printf("\nGive No. %d element ",i);
	scanf("%d",A[i]);
	}
	getch();
}