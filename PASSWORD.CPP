#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<dos.h>
#include"cal.h"
void main()
{
	static char a[100],ch,l[100],p[]={"zaheer"},c[]={"zhsbravo"};
	float j,k,f;
	long int z,g;
	int t=0,s,y;
	textcolor(LIGHTGREEN);
	clrscr();
	printf("Login name = ");
	gets(l);
	printf("Enter Password = ");
	for(int i=0;i<=100;i++)
		{
		ch = getch();
		if(ch==13)
			break;
		a[i]=ch;
		t++;
		printf("*");
		}
	if(strcmp(a,p)==0&&strcmp(l,c)==0)
	{
	while(1)
		{
		clrscr();
		printf("\n\n1.Add\n2.Subtraction\n3.Division\n4.Multiplication");
		printf("\n5.Square of a No.\n6.Squareroot of a No.\n7.Cuberoot of a No.");
		printf("\n8.1st Raise to the power 2nd(x^y)");
		printf("\n9.Check leap year\n10.Factorial\n11.Exit!!!");
		printf("\n12.Inverse(1/x)\n13.a raise to the power 1/x (a^1/x)");
		printf("\nEnter your choice = ");
		scanf("%ld",&s);
		switch(s)
			{
			 case 1:
				printf("\n1st No = ");
				scanf("%f",&f);
				printf("\n2nd No = ");
				scanf("%f",&j);
				k = sum(f,j);
				printf("Sum = %f",k);
				getch();
				break;
			 case 2:
				printf("\n1st No = ");
				scanf("%f",&f);
				printf("\n2nd No = ");
				scanf("%f",&j);
				k = sub(f,j);
				printf("Subtraction = %f",k);
				getch();
				break;
			 case 3:
				printf("\n1st No = ");
				scanf("%f",&f);
				printf("\n2nd No = ");
				scanf("%f",&j);
				k = div(f,j);
				printf("Division = %f",k);
				getch();
				break;
			 case 4:
				printf("\n1st No = ");
				scanf("%f",&f);
				printf("\n2nd No = ");
				scanf("%f",&j);
				k = mult(f,j);
				printf("Product = %f",k);
				getch();
				break;
			 case 5:
				printf("\nEnter a No for its square = ");
				scanf("%f",&f);
				k = squa(f);
				printf("Square = %f",k);
				getch();
				break;
			 case 6:
				printf("\nEnter a No for its squareroot = ");
				scanf("%f",&f);
				k = sroot(f);
				printf("Squareroot = %f",k);
				getch();
				break;
			 case 7:
				printf("Enter a No for its cuberoot = ");
				scanf("%f",&f);
				k = croot(f);
				printf("Cuberoot = %f",k);
				getch();
				break;
			 case 8:
				printf("\n1st No. = ");
				scanf("%f",&f);
				printf("\n2nd No. = ");
				scanf("%f",&j);
				k=power(f,j);
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
				g = fact(z);
				printf("Factorial = %ld",g);
				getch();
				break;
			 case 11:
				exit(0);
			 case 12:
				printf("Enter a No for its Inverse(1/x) = ");
				scanf("%f",&f);
				k = inv(f);
				printf("Inverse = %f",k);
				getch();
				break;
			 case 13:
				printf("Enter a = ");
				scanf("%f",&f);
				printf("Enter x = ");
				scanf("%f",&j);
				k = a1x(f,j);
				printf("a raise to the power 1/x (a^1/x) = %f",k);
				getch();
				break;

			 default:
				printf("\nOpen your eyes and then Enter choice!!");
				getch();
				break;
			 }
		}
	}
	else
		{
		sound(1600);
		delay(500);
		nosound();
		delay(500);
		sound(1600);
		delay(500);
		nosound();
		printf("\nInvalid user name or Password !!!");
		}

	getch();
}