#include<stdio.h>
#include<conio.h>
void main()
{
	int i,A[10];
	clrscr();
	for(i=1;i<10;i++)
		{
		 A[i]=i*i;
		}
	for(i=1;i<10;i++)
		{
		 printf("\nThe array element against %d is %d\n",i,A[i]);
		}
	getch();
}