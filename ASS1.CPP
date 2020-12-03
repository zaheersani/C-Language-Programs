#include<stdio.h>
#include<conio.h>
#include<math.h>
/*To make output as;
  i=4  i^2=6
  i=8  i^2=14
  i=12 i^2=22
  i=16 i^2=30*/
void main()
{
	int i;
	clrscr();
	for(i=4;i<=16;i=i+4)
		{
		 printf("\ni=%d             i^2=%d\n",i,i*2-2);
		}
	getch();
}