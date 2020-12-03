#include<conio.h>
#include<stdio.h>
main()
{
	int a,b=1;
	clrscr();
	printf("\nEnter the no for fictorial = ");
	scanf("%d",&a);
	while(a>=1)
		{
		 b=b*a;
		 a--;
		}
	printf("\nFictorial = %d",b);
	getch();
	return 0;
}