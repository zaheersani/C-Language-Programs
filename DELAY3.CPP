#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int i,j;
	for(j=0;j>=0;j++)            /* For Infinity loops */
    {
	for(i=1;i<26;i++)
	{
	gotoxy(2.3*i,i);
	printf("Zaheer-ul-Hussain Sani");
	delay(200);
	clrscr();
	}
    }
}