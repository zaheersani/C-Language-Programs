#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
	float a,b,c,d,e,disc,quad1,quad2;
	printf("Give three values of quadratic equation\n");
	printf("\nA = ");
	scanf("%f",&a);
	printf("\nB = ");
	scanf("%f",&b);
	printf("\nC = ");
	scanf("%f",&c);
	e=b*b-4*a*c;
	if(e<0)

		{
		 disc=sqrt(-e);
		 quad1=(-b+disc)/(2*a);
		 quad2=(-b-disc)/(2*a);
		 printf("\nx 1 = %.3f i\n",quad1);
		 printf("\nx 2 = %.3f i\n",quad2);
		}

	else

	if(e>=0)

		{
		 disc=sqrt(e);
		 quad1=(-b+disc)/(2*a);
		 quad2=(-b-disc)/(2*a);
		 printf("\nx 1 = %.3f\n",quad1);
		 printf("\nx 2 = %.3f",quad2);
		}
	getch();
}