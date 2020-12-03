#include<stdio.h>
#include<conio.h>
#include"bravo.h"
void main()
{
	float i,j,k,root1,root2;
	clrscr();
	printf("Give a,b and c of quadratic\n");
	printf("\nA=");
	scanf("%f",&i);
	printf("\nB=");
	scanf("%f",&j);
	printf("\nC=");
	scanf("%f",&k);
	quad(i,j,k,&root1,&root2);
	printf("\nx=%.3f\n\nx=%.3f",root1,root2);
	getch();
}