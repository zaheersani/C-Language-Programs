#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
	float a,b,c,d,z,h,e;
	clrscr();
	printf("Enter values\n");
	printf("\nSextant placed at X\n");
	printf("Base to Base=");
	scanf("%f",&a);
	printf("\nBase to Top=");
	scanf("%f",&b);
	printf("\nWhen sextant placed at Y\n\n");
	printf("Base to Base=");
	scanf("%f",&c);
	printf("\nBase to Top=");
	scanf("%f",&d);
	printf("\nDistance Between X and Y =");
	scanf("%f",&e);
	z = (tan(b-a)*tan(d-c)/(tan(b-a)-tan(d-c))) * e;
	printf("\nThe height is %.3lf of inaccessible object" , z);
	getch();
}