#include<stdio.h>
#include<conio.h>
void main()
{
	int i,A[10],length,minv,minp;
	clrscr();
	scanf("%d",&length);
	for(i=0;i<length;i++)
		{
		 scanf("%d",&A[i]);
		}
	minv=A[0];
	minp=0;
	for(i=1;i<length;i++)
		{
		 if(minv>A[i])
			{
			 minv=A[i];
			 minp=i;
			}
		}
	printf("The minimum value is %d on the place %d",minv,minp);
}