#include<stdio.h>
#include<conio.h>
void main()
{
	int i,A[10],length;
	clrscr();
	scanf("%d",&length);
	for(i=1;i<length;i++)
		{
		 scanf("%d",&A[i]);
		}
	for(i=1;i<length;i++)
		{
		 printf("Value of i= %d \nValue of array= %d\n",i,A[i]);
		}
	getch();
}
