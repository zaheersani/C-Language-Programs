#include<stdio.h>
#include<conio.h>
void leap(int z)
{
	if(z%4==0)
		printf("%d is a leap year",z);
	else
		printf("%d isn't a leap year",z);
}
void main()
{
	int z;
	clrscr();
	printf("year = ");
	scanf("%d",&z);
	leap(z);
	getch();
}