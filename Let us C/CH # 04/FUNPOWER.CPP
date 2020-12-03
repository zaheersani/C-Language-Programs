#include<stdio.h>
#include<conio.h>
float power(float a,float b)
{
	float y=a;
	for(int x=1;x<b;x++)
		a=a*y;
	return (a);
}
void main()
{
	float f,s,d;
	clrscr();
	printf("Enter No = ");
	scanf("%f",&f);
	scanf("%f",&s);
	d=power(f,s);
	printf("Ans = %f",d);
	getch();
}