#include<stdio.h>
#include<conio.h>
float i,j,k,sum;
float sumf(float a,float b)
{
	sum=a+b;
	return sum;
}
void main()
{
	clrscr();
	printf("Give two Nos.\n");
	scanf("%f %f",&i,&j);
	k=sumf(i,j);
	printf("The sum=%f\n",k);
	getch();
}