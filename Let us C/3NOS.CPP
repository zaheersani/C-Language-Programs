#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("Enter 1st No. = ");
	scanf("%d",&a);
	printf("Enter 2nd No. = ");
	scanf("%d",&b);
	printf("Enter 3rd No. = ");
	scanf("%d",&c);
	if(a>b && a>c)
		{
		printf("Largest = %d",a);
		if(b>c)
			printf("\nMiddle = %d\nSmallest = %d",b,c);
		else
			printf("\nMiddle = %d\nSmallest = %d",c,b);
		}
	else
	if(b>a && b>c)
		{
		printf("Largest = %d",b);
		if(a>c)
			printf("\nMiddle = %d\nSmallest = %d",a,c);
		else
			printf("\nMiddle = %d\nSmallest = %d",c,a);
		}
	else
		{
		printf("Largest = %d",c);
		if(a>b)
			printf("\nMiddle = %d\nSmallest = %d",a,b);
		else
			printf("\nMiddle = %d\nSmallest = %d",b,a);
		}
	getch();
}