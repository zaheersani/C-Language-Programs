#include<stdio.h>
#include<conio.h>
main()
{
	clrscr();
	printf("Are u Khurram?(y/n)");
	if(getche()=='y')
		{
		 printf("\nO! Chup ho ja\nChal ja kay chai p");
		}
	else
		{
		 printf("\nAre you Imran?(y/n)");
		 if(getch()=='y')
			{
			 printf("\nMr.Programmer! Why have you stoped eating?\nRemember always, a=1");
			}
		 else
			{
			 printf("\nAre you Sameer?(y/n)");
			 if(getch()=='y')
				{
				 printf("\nAre you ready for lunch in BOI?");
				}
			 else
				{
				 printf("\nThen What are you doing with this program?\nClose it Stupid!!!");
				}

			 }
		}
	getch();
	return 0;
}