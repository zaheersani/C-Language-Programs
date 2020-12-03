#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,A[10][10];
	clrscr();
	for(j=0;j<2;j++)
		{
		 for(i=0;i<3;i++)
			{
			 scanf("%d",&A[i][j]);
			}
		}
	for(j=0;j<2;j++)
		{
		 for(i=0;i<3;i++)
			{
			 printf("%d\n",A[i][j]);
			}
		}
}