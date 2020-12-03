#include<stdio.h>
#include<string.h>
#include<dos.h>
#include<conio.h>
void main()
{
	static char x[100],y[100];
	char a[]={'N','o','w',' ' ,'t','h','e','y',' ' ,'a','r','e',' ','e','q','u','a','l','\0'};
	textcolor(LIGHTGREEN);
	clrscr();
	printf("1st string = ");
	gets(x);
	printf("2nd string = ");
	gets(y);
	printf("\nLength of 1st string = %d\nLength of 2nd string = %d",strlen(x),strlen(y));
	if(strcmp(x,y)==0)
		printf("\n\nStrings are  equal!!!\n\n");
	else
		printf("\n\nStrings are not equal!!!\n\n");
	printf("\nInverse of 1st string = ");
	for(int i=strlen(x);i>=0;i--)
		{
		printf("%c",x[i]);
		}
	printf("\nInverse of 2nd string = ");
	for(i=strlen(y);i>=0;i--)
		{
		printf("%c",y[i]);
		}
	printf("\n\n");
	strcpy(x,y);
	puts(x);
	puts(y);
	printf("\n");
	for(i=0;i<=18;i++)
		{
		delay(300);
		printf("%c",a[i]);
		}
	getch();
}  /*
 COLORS (text mode)
ßßßßßßßßßßßßßßßßßßßß³Back-³Fore-
 Constant     ³Value³grnd?³grnd?
ÍÍÍÍÍÍÍÍÍÍÍÍÍÍØÍÍÍÍÍØÍÍÍÍÍØÍÍÍÍÍ
 BLACK        ³  0  ³ Yes ³ Yes
 BLUE         ³  1  ³ Yes ³ Yes
 GREEN        ³  2  ³ Yes ³ Yes
 CYAN         ³  3  ³ Yes ³ Yes
 RED          ³  4  ³ Yes ³ Yes
 MAGENTA      ³  5  ³ Yes ³ Yes
 BROWN        ³  6  ³ Yes ³ Yes
 LIGHTGRAY    ³  7  ³ Yes ³ Yes
 DARKGRAY     ³  8  ³ No  ³ Yes
 LIGHTBLUE    ³  9  ³ No  ³ Yes
 LIGHTGREEN   ³ 10  ³ No  ³ Yes
 LIGHTCYAN    ³ 11  ³ No  ³ Yes
 LIGHTRED     ³ 12  ³ No  ³ Yes
 LIGHTMAGENTA ³ 13  ³ No  ³ Yes
 YELLOW       ³ 14  ³ No  ³ Yes
 WHITE        ³ 15  ³ No  ³ Yes
ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÅÄÄÄÄÄÅÄÄÄÄÄÄ
 BLINK        ³128  ³ No  ³ ***
 */