#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	clrscr();
	printf("Enter an odd or even No = ");
	scanf("%d",&a);
	if(a%2==0)
		{
		 printf("An even No was entered");
		}
	else
		{
		 printf("An odd No was entered");
		}
	getch();
	return 0;
}