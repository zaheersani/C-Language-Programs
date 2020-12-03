#include<stdio.h>
#include<conio.h>
#include<process.h>
float i,j,k;
int c;
float sum(float a,float b)
{
	float add;
	add = a + b;
	return (add);
}
float div(float a,float b)
{
	float d;
	d = a/b;
	return (d);
}
float sub(float a,float b)
{
	float neg;
	neg = a - b;
	return (neg);
}
float mult(float a,float b)
{
	float pro;
	pro = a*b;
	return (pro);
}
float squa(float a)
{
	float s;
	s = a*a;
	return (s);
}
void main()
{
	textmode(2);
	textbackground(GREEN);
	textcolor(BLUE);
	clrscr();
	while(1)
		{
			printf("\n1.Add\n2.Subtraction\n3.Division\n4.Multiplication\n5.Square of a No.\n6.exit!");
			printf("\nEnter your choice = ");
			scanf("%d",&c);
			switch(c)
				{
				 case 1:
						printf("\n1st No = ");
						scanf("%f",&i);
						printf("\n2nd No = ");
						scanf("%f",&j);
						k = sum(i,j);
						printf("Sum = %f",k);
						break;
				 case 2:
						printf("\n1st No = ");
						scanf("%f",&i);
						printf("\n2nd No = ");
						scanf("%f",&j);
						k = sub(i,j);
						printf("Subtraction = %f",k);
						break;
				 case 3:
						printf("\n1st No = ");
						scanf("%f",&i);
						printf("\n2nd No = ");
						scanf("%f",&j);
						k = div(i,j);
						printf("Division = %f",k);
						break;
				 case 4:
						printf("\n1st No = ");
						scanf("%f",&i);
						printf("\n2nd No = ");
						scanf("%f",&j);
						k = mult(i,j);
						printf("Product = %f",k);
						break;
				 case 5:
						printf("\nEnter a No for its square = ");
						scanf("%f",&i);
						k = squa(i);
						printf("Square = %f",k);
						break;
				 case 6:
						exit(0);
				 }
		}
}