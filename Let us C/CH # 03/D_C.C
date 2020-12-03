#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,j=1;
	clrscr();
	for(;;)
		{
		if(i>5)
			break;
		else
			j+=i;
		printf("\n%d",j);
		i+=j;
		}
}