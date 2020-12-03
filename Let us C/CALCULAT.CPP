#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<process.h>
float i,j,k;
long int c,z,y;
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
float sroot(float a)
{
	float p;
	p = pow(a,0.5);
	return (p);
}
float croot(float a)
{
	float p;
	p = pow(a,1.0/3.0);
	return (p);
}
float power(float a,float b)
{
	float y=a;
	for(int x=1;x<b;x++)
		a=a*y;
	return (a);
}
void leap(int z)
{
	if(z%4==0)
		printf("%d is a leap year",z);
	else
		printf("%d isn't a leap year",z);
}
long int fact(long int a)
{
	long int x=1;
	for(long int c=a;c>=1;c--)
		x=x*c;
	return (x);
}
float inv(float a)
{
	float p;
	p = 1.0/a;
	return (p);
}
float a1x(float a,float b)
{
	float p;
	p = pow(a,1.0/b);
	return (p);
}
void main()
{
	textcolor(GREEN);
	clrscr();
	while(1)
		{
		clrscr();
		printf("\n\n1.Add\n2.Subtraction\n3.Division\n4.Multiplication");
		printf("\n5.Square of a No.(xý)\n6.Squareroot of a No.(ûx)\n7.Cuberoot of a No.(3ûx)");
		printf("\n8.1st Raise to the power 2nd(x^y)");
		printf("\n9.Check leap year\n10.Factorial(x!)\n11.Exit!!!");
		printf("\n12.Inverse(1/x)\n13.a raise to the power 1/x (xû)");
		printf("\nEnter your choice = ");
		scanf("%ld",&c);
		switch(c)
			{
			 case 1:
				printf("\n1st No = ");
				scanf("%f",&i);
				printf("\n2nd No = ");
				scanf("%f",&j);
				k = sum(i,j);
				printf("Sum = %f",k);
				getch();
				break;
			 case 2:
				printf("\n1st No = ");
				scanf("%f",&i);
				printf("\n2nd No = ");
				scanf("%f",&j);
				k = sub(i,j);
				printf("Subtraction = %f",k);
				getch();
				break;
			 case 3:
				printf("\n1st No = ");
				scanf("%f",&i);
				printf("\n2nd No = ");
				scanf("%f",&j);
				k = div(i,j);
				printf("Division = %f",k);
				getch();
				break;
			 case 4:
				printf("\n1st No = ");
				scanf("%f",&i);
				printf("\n2nd No = ");
				scanf("%f",&j);
				k = mult(i,j);
				printf("Product = %f",k);
				getch();
				break;
			 case 5:
				printf("\nEnter a No for its square = ");
				scanf("%f",&i);
				k = squa(i);
				printf("Square = %f",k);
				getch();
				break;
			 case 6:
				printf("\nEnter a No for its squareroot = ");
				scanf("%f",&i);
				k = sroot(i);
				printf("Squareroot = %f",k);
				getch();
				break;
			 case 7:
				printf("Enter a No for its cuberoot = ");
				scanf("%f",&i);
				k = croot(i);
				printf("Cuberoot = %f",k);
				getch();
				break;
			 case 8:
				printf("\n1st No. = ");
				scanf("%f",&i);
				printf("\n2nd No. = ");
				scanf("%f",&j);
				k=power(i,j);
				printf("X^Y = %f",k);
				getch();
				break;
			 case 9:
				printf("Year = ");
				scanf("%d",&y);
				leap(y);
				getch();
				break;
			 case 10:
				printf("\nEnter a No for its Factorial = ");
				scanf("%ld",&z);
				c = fact(z);
				printf("Factorial = %ld",c);
				getch();
				break;
			 case 11:
				exit(0);
			 case 12:
				printf("Enter a No for its Inverse(1/x) = ");
				scanf("%f",&i);
				k = inv(i);
				printf("Inverse = %f",k);
				getch();
				break;
			 case 13:
				printf("Enter a = ");
				scanf("%f",&i);
				printf("Enter x = ");
				scanf("%f",&j);
				k = a1x(i,j);
				printf("a raise to the power 1/x (a^1/x) = %f",k);
				getch();
				break;

			 default:
				printf("\nOpen your eyes and then Enter choice!!");
				break;
			 }
		}
}