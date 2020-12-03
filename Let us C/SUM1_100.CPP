#include<stdio.h>
#include<conio.h>
void main()
{
	long int a=0;
	clrscr();
	for(int i=1;i<=100;i++)
		a = a+i;
	printf("Sum = %ld",a);
	getch();
}