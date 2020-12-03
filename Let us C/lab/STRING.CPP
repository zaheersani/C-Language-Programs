#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[10],l,p;
	clrscr();
	printf("Enter a string = ");
	scanf("%s",a);
	l = strlen(a);
	for(int i=0,j=l;i<=l,j>=0;i++,j--)
	p = strcmp(i,l);
	if(p==0)
	printf("palindome!");
	printf("%d",l);

	getch();
}