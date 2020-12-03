#include<stdio.h>
#include<conio.h>
void main()
{
	int i,A[10],length,maxv,maxp;
	clrscr();
	scanf("%d",&length);
	for(i=0;i<length;i++)
		{
		 scanf("%d",&A[i]);
		}
	maxv=A[0];
	maxp=0;
	for(i=1;i<length;i++)
		{
		 if(maxv<A[i])
			{
			 maxv=A[i];
			 maxp=i;
			}
		}
	printf("The maximum value is %d on the place %d",maxv,maxp);
}