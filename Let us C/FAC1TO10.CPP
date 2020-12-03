#include<stdio.h>
#include<conio.h>
void main()
{
	long int a=1,b=1;
	clrscr();
	do
		{
		 b = b * a;
		 printf("\nFactorial of %ld = %ld",a,b);
		 a++;
		}
	while(a<=10);
	getch();
}