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
�������������������߳Back-�Fore-
 Constant     �Value�grnd?�grnd?
��������������������������������
 BLACK        �  0  � Yes � Yes
 BLUE         �  1  � Yes � Yes
 GREEN        �  2  � Yes � Yes
 CYAN         �  3  � Yes � Yes
 RED          �  4  � Yes � Yes
 MAGENTA      �  5  � Yes � Yes
 BROWN        �  6  � Yes � Yes
 LIGHTGRAY    �  7  � Yes � Yes
 DARKGRAY     �  8  � No  � Yes
 LIGHTBLUE    �  9  � No  � Yes
 LIGHTGREEN   � 10  � No  � Yes
 LIGHTCYAN    � 11  � No  � Yes
 LIGHTRED     � 12  � No  � Yes
 LIGHTMAGENTA � 13  � No  � Yes
 YELLOW       � 14  � No  � Yes
 WHITE        � 15  � No  � Yes
���������������������������������
 BLINK        �128  � No  � ***
 */