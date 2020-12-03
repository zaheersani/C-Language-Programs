#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k=1,b,a;
	clrscr();
	printf("Enter a No = ");
	scanf("%d",&i);
	printf("Enter power of No = ");
	scanf("%d",&j);
	a=i;
	while(k<j)
		{
		 a = a*i;
		 k++;
		}
	printf("%d",a);
	getch();
}