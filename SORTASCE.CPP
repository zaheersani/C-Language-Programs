#include<stdio.h>
#include<conio.h>
/* Sorting in Ascending order */
void main()
{
	int i,y,A[10],length,p,q;
	clrscr();
	scanf("%d",&length);
	for(i=0;i<length;i++)
		{
		 scanf("%d",&A[i]);
		}
	y=0;
	p=0;
	q=0;
	for(i=0;i<length;i++)
		{
		 for(y=i+1;y<length;y++)
			{
			 if(A[i]<A[y])    /* For Descending order"if(A[i]>A[y])" */
				{
				 p=A[i];
				 q=A[y];
				 A[y]=p;
				 A[i]=q;
				}
			 }
		 }
	for(i=0;i<length;i++)
		{
		 printf("Ascending order %d\n",A[i]);
		}
}