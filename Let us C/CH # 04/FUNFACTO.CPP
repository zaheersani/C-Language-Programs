#include<stdio.h>
#include<conio.h>
long int d,z;
long int fact(long int a)
{
	long int x=1;
	for(long int c=a;c>=1;c--)
		x=x*c;
	return (x);
}
void main()
{
	clrscr();
	printf("Enter a No = ");
	scanf("%ld",&z);
	d=fact(z);
	printf("Fact = %ld",d);
	getch();
}