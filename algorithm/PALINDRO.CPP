#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	static char a[10],b[10];
	int c=0,i,d;
	clrscr();
	printf("String = ");
	gets(a);
	d=strlen(a);
	printf("Length = %d",d);
	for(i=d;i>=0;i--)
		{
		 b[c]=a[i];
		 c++;
		 printf("%c",b[c]);
		}
	printf("\n");
	for(i=0;i<=d;i++)
		printf("%c",b[i]);
	if(strcmp(a,b)==0)
		printf("String and its reverse are equal or String is PALINDROME!");
	else
		printf("String and its reverse are not equal or string is not PALINDROME");
	getch();
}