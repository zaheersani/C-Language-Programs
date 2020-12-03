#include<stdio.h>
#include<conio.h>
void main()
{
	int i,A[10],B[10],C[10],length;
	clrscr();
	scanf("%d",&length);
	for(i=0;i<length;i++)
		{
		 scanf("%d %d",&A[i],&B[i]);
		}
	for(i=0;i<length;i++)
		{
		 C[i]=A[i]+B[i];
		}
	for(i=0;i<length;i++)
		{
		 printf("%d\n",C[i]);
		}
}