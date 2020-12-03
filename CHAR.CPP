#include<stdio.h>
#include<conio.h>
void main()
{
	char Ch1,Ch2;
	clrscr();
	printf("Give a character\n");
	scanf("\n%c",&Ch1);
	Ch2='A';                   /* For Fixed Character  */
	printf("\nThe given characters are %c%c\n",Ch1,Ch2);
	getch();
}