#include<stdio.h>
#include<conio.h>
void main()
{
	int a,a1,a2,a3,a4,a5,i;
	clrscr();
	for(i=1;i<=500;i++)
		{
		 if(i>=1&&i<=9)
			{
			 a = (i*i*i);
			 if(a==i)
			 printf("\nThe Armstrong Nos are %d",a);
			}
		 else
		 if(i>=10&&i<=99)
			{
			 a1 = (i/10);
			 a2 = (i%10);
			 if(i == (a1*a1*a1) + (a2*a2*a2))
			 printf("\nThe Armstron Nos are %d",i);
			}
		 else
		 if(i>=100&&i<=500)
			{
			 a3 = (i/100);
			 a4 = (i/10)%10;
			 a5 = (i%10);
			 if(i == (a3*a3*a3)+(a4*a4*a4)+(a5*a5*a5))
			 printf("\nThe Armstrong Nos are %d",i);
			}
		}
	getch();
}
