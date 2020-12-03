#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,sum,sub,div,mul;
	clrscr();
	printf("Enter 1st No. = ");
	scanf("%d",&a);
	printf("Enter 2nd No. = ");
	scanf("%d",&b);
	printf("\n1. Add Nos?\n2. Subtract Nos.?\n3. Multiply Nos.?\n4. Divide Nos.?");
	printf("\nEnter your choice = ");
	scanf("%d",&c);
	switch(c)
		{
		case 1:
			sum = a + b;
			printf("Sum = %d",sum);
			break;
		case 2:
			sub = a - b;
			printf("Subtraction = %d",sub);
			break;
		case 3:
			mul = a * b;
			printf("Product = %d",mul);
			break;
		case 4:
			div = a/b;
			printf("Division = %d",div);
			break;
		default:
			printf("Chose a valid No");
		}
	getch();
}