#include<stdio.h>
#include<conio.h>
main()
{
	//Sum of five digits
	clrscr();
	int a,b,c,d,e,f,g;
	scanf("%d",&a);
	b = a/10000;
	c = (a/1000)%10;
	d = (a/100)%10;
	e = (a/10)%10;
	f = a%10;
	g = b+c+d+e+f;
	printf("Sum = %d",g);
	getch();
	return 0;
}