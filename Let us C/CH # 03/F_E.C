#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	clrscr();
	for(i=1;i<=3;i++)
		{
		 for(j=1;j<=3;j++)
			{
			 for(k=3;k>=1;k--)
			 if((i!=j)&&(j!=k)&&(i!=k))
			 printf("\n%d %d %d",i,j,k);
			}
		}
	getch();
}