#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[100],ch,l[100];
	textcolor(LIGHTGREEN);
	clrscr();
	printf("Login name = ");
	gets(l);
	printf("Enter Password = ");
	for(int i=0;i<=100;i++)
		{
		ch = getch();
		a[i]=ch;
		if(ch==13)
			break;
		printf("");
		}
	getch();
}