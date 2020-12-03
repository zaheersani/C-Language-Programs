#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<process.h>
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