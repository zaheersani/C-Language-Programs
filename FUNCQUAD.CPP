#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
float disc,i,j,k,root1,root2;
void quad(float a,float b,float c,float *r1,float *r2)
{
	disc=b*b-4.0*a*c;
	if(disc<0)
		{
		 *r1=(-b+sqrt(-disc))/(2.0*a);
		 *r2=(-b-sqrt(-disc))/(2.0*a);
		 sound(1000);
		 delay(1000);
		 nosound();
		 printf("\nMultiply 'i' with the answer\n");
		}
	else
	if(disc>=0)
		{
		 *r1=(-b+sqrt(disc))/(2.0*a); // Quadratic Equation: x=(-b+(b^2-4ac)^1/2)/2a
		 *r2=(-b-sqrt(disc))/(2.0*a);
		}
}
void main()
{
	clrscr();
	printf("Give a,b and c of quadratic\n");
	printf("\nA=");
	scanf("%f",&i);
	printf("\nB=");
	scanf("%f",&j);
	printf("\nC=");
	scanf("%f",&k);
	quad(i,j,k,&root1,&root2);
	printf("\nx 1 = %.3f\n\nx 2 = %.3f",root1,root2);
	getch();
}