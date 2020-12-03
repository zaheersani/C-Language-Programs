#include<conio.h>
#include<stdio.h>
#include<dos.h>
main()
{
	char w[15] = { 'w', 'a', 'k', 'e', 'u', 'p', ' ', 'N', 'e', 'o', ' ', '.', '.', '.', '\0' };
	char m[25] = { 'T', 'h', 'e', ' ', 'M', 'A', 'T', 'R', 'I', 'X', ' ', 'h', 'a', 's', ' ', 'y', 'o', 'u', ' ', '.', '.', '.', '\0'};
	char s[]={'k','n','o','c','k',' ','k','n','o','c','k','.','.','.','\0'};
	char n[24] = { 'F' , 'o' , 'l' , 'l' ,'o' , 'w' , ' ' , 'T' , 'h' , 'e' , ' ' , 'W' , 'h' , 'i' , 't' , 'e' , ' ' , 'r' , 'a' , 'b', 'b' ,'i' , 't' , '\0'};
	textcolor(LIGHTGREEN);
	clrscr();
	for (int i=0; i<=13; i++)
		{
		 printf("%c",w[i]);
		 delay(300);
		}
	clrscr();
	delay(1000);
	for (int j=0; j<=21; j++)
		{
		 printf("%c",m[j]);
		 delay(300);
		}
	clrscr();
	delay(1000);
	for(i=0;i<=15;i++)
		{
		delay(350);
		printf("%c",s[i]);
		}
	clrscr();
	delay(1000);
	for(int k=0;k<=23;k++)
		{
		 printf("%c",n[k]);
		 delay(350);
		}
	getch();
}
