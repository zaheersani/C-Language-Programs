#include<stdio.h>
#include<conio.h>
main()
{
//Reverse five digits & check entered & reversed digits are equal
	clrscr();
	int a,b,c,d,e,f,g,sum;
	printf("Enter a Five digit No = ");
	scanf("%d",&a);
	b = a/10000;
	c = (a/1000)%10;
	d = (a/100)%10;
	e = (a/10)%10;
	f = a%10;
	sum = (f*10000)+(e*1000)+(d*100)+(c*10)+b;
	printf("Revesed No is = %d%d%d%d%d",f,e,d,c,b);
	if(sum==a)
		{
		 printf("Entered No & reversed No are equal");
		}
	else
		{
		 printf("Entered No & reversed No are Not equal");
		}
	getch();
	return 0;
}