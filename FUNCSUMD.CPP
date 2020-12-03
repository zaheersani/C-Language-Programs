#include<stdio.h>
#include<conio.h>
float sum,diff,i,j,x,y;
void sumdiff(float a,float b,float *c,float *d)
{
	sum=a+b;
	diff=a-b;
	*c=sum;
	*d=diff;
}
void main()
{
	clrscr();
	printf("Enter two Nos.;\n");
	printf("\nA=");
	scanf("%f",&i);
	printf("\nB=");
	scanf("%f",&j);
	sumdiff(i,j,&x,&y);
	printf("\nSum=%.3f\n\nDiffrence=%.3f",x,y);
	getch();
}