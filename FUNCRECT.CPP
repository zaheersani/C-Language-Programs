#include<stdio.h>
#include<conio.h>
float i,j,x,y;
void rect(float a,float b)
{
	for(y=1;y<=b;y++)
		{
		 for(x=1;x<=a;x++)
			{
			 if(x==1||y==b||x==a||y==1)
			 printf("*");
			 else
			 printf(" ");
			}
		 printf("\n");
		}
}
void main()
{
	clrscr();
	printf("Give two values for recangle\n");
	printf("A=");
	scanf("%f",&i);
	printf("B=");
	scanf("%f",&j);
	clrscr();
	rect(i,j);
	getch();
}