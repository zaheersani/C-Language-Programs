#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
	char l[14] = { 'L','o','a','d','i','n','g',' ','.','.','.','.','.','\0' };
	clrscr();
	printf("1st press Alt+Enter for full screen\n");
	printf("\nAnd then Press any key to continue!!!");
	getch();
	clrscr();
	sleep(2);
	printf("\t\t\tPlease Wait!......\n\n");
	sleep(1);
	clrscr();
	for(int j=0;j<=13;j++)
		{
		 printf("%c",l[j]);
		 delay(300);
		}
	printf("\n\n\t");
	sleep(2);
	for(int i=0;i<=65;i++)
		{
		 delay(50);
		 printf("%c",'\xDB');
		}
	sleep(2);
	printf("\n\nDo you want to Format your Hard Disk (y/n)?");
	if(getche()=='n')
		{
		 printf("\n\nSorry I've to do this! ha! ha! ha! [^_^]");
		 sound(1000);
		 delay(500);
		 nosound();
		}
	else
	if('y')
		{
		 printf("\n\nNice choice smarty\n\nGood Luck");
		}
	sleep(1);
	printf("\n\nInitiating");
	sleep(1);
	printf("\nPlease Wait!");
	sleep(2);
	printf("\n\nFormating Master Disk");
	sleep(7);
	printf("\n\nFormating Slave Disk");
	sleep(5);
	printf("\n\n\t\tThanx!...[*_O] .... to Zaheer-ul-Hussain Sani");
	sleep(3);
	printf("\n\nNow Restart your system & feel free");
	sleep(3);
	printf("\n\nDon't be panic Everything would be all right!");
	getch();
}
