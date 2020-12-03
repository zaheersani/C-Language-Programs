#include<conio.h>
#include<stdio.h>
void main()
{
	int i = 0;
	int A[1] = {0};
	int j, a;
	clrscr();
	printf("\n\tEnter the numbers, press 'f' to finish.\n");
	while ( getch() != 'f' )
		{
		 scanf("%d",&A[i]);
		 i++;
		}
	j=i;
	printf("\n\tThe numbers are\n");
	for(a=0; a<=j-1; a++)
		{
		 printf("\t%d",A[a]);
		}
	printf("\n\tThe inverse is\n");
	for(a=j-1; a>=0; a--)
		{
		 printf("\t%d",A[a]);
		}
	getch();
}
