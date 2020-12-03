//Calender Program in C

//Program to display calender for a given year


#include <stdio.h>
#include <conio.h>
#include <process.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

unsigned long days=0;

void display(int n)

{
	int i, column, k, flag=0, j;
	printf("\nSun\tMon\tTue\tWed\tThu\tFri\tSat");
	for(i=1; i<=n; i++)
	{
	k=days%7;//remainder gives the starting day of each month
	if(flag==0)
	{
	for(j=1; j<=k; j++)//controls tabs of first week
	printf("\t");
	flag=1;//ensures that block is only executed once
	column=k;
	}
	printf("%d\t", i);
	column++;
	if(column%7==0)//prints new line at the end of each week
	printf("");
	}
	printf("\nPress any key to continue");
	getch();
}

void calculate(int year)
//function calculates no. of days elapsed since 1899
{
	int i, month;
	for(i=1899; i<year; i++)
		//1899 chosen because Jan 1, 1899 is a Sunday
	{
	if((i%400==0)?1:((i%100==0)?0:((i%4==0)?1:0)))


	days+=366;
	else
	days+=365;
	}
	for(month=1; month<=12; month++)
	{
	printf("");
	switch(month)
		/*switch case used to display each month and
	increment no. of days*/

	{
    printf("\n");
	case 1: printf(" JANUARAY %d", year);
	display(31);
	days+=31;
	break;
	case 2: printf(" FEBURARY %d", year);
	if((year%400==0)?1:((year%100==0)?0:((year%4==0)?1:0)))
	{
	display(29);
	days+=29;
	}
	else
	{
	display(28);
	days+=28;
	}
	break;
	case 3: printf(" MARCH %d", year);
	display(31);
	days+=31;
	break;
	case 4: printf(" APRIL %d", year);
	display(30);
	days+=30;
	break;
	case 5: printf(" MAY %d", year);
	display(31);
	days+=31;
	break;
	case 6: printf(" JUNE %d", year);
	display(30);
	days+=30;
	break;
	case 7: printf(" JULY %d", year);
	display(31);
	days+=31;
	break;
	case 8: printf(" AUGUST %d", year);
	display(31);
	days+=31;
	break;
	case 9: printf(" SEPTEMBER %d", year);
	display(30);
	days+=30;
	break;
	case 10: printf(" OCTOBER %d", year);
	display(31);
	days+=31;
	break;
	case 11: printf(" NOVEMBER %d", year);
	display(30);
	days+=30;
	break;
	case 12: printf(" DECEMBER %d", year);
	display(31);
	days+=31;
	break;
	}
	}
}

void main()
{
	char ch[10];
	int i, year, choice;
	do
	{
	clrscr();
	days=0;
	printf("Enter the year in 'yyyy' format:");
	scanf("%s", ch);//stores input first as a string
	for(i=0; i<strlen(ch); i++)
	if(ch[i]<'0' || ch[i]>'9')//checks for invalid inputs
	{
	printf("Invalid Year!");
	printf("END OF PROGRAM");
	getch();
	exit(0);
	}
	year = atoi(ch);
		//converts the year from string to integer datatype
	clrscr();
	printf("Calender for Year %d", year);
	printf("\n**********************");
	calculate(year);
		//calls function to calculate no. of days elapsed

	printf("*******************************************");
	printf("\nPress 1 to continue, 2 to exit");
	scanf("%d", &choice);
	}while(choice==1);
	clrscr();
	printf("END OF PROGRAM");
	getch();
}

#include<conio.h>

int day(int m1,int y1)
{
  int d;
  if(m1==1 || m1==3 || m1==5 || m1==7 || m1==8 || m1==10 || m1==12)
		 d=31;
  else if(m1==4 || m1==6 || m1==9 || m1==11)
		 d=30;
  else if((y1%100!=0 && y1%4==0) || y1%400==0)
		 d=29;
  else
		 d=28;
  return d;
}
/*
void main()
{
  long unsigned int t;
  unsigned int y,y1,m,m1,d,da,i,j,k;
  char
a[12][20]={"January","February","March","April","May","June","July","August","September","October","November","December"};
  clrscr();
  textcolor(CYAN);
  cprintf("Enter the year: ");
  scanf("%4u",&y);
  if(y<0)
		 y=-y;
  cprintf("Enter the month: ");
  scanf("%2u",&m);
  if(m<=0 || m>=13)
		 m=1;
  clrscr();
  gotoxy(32,2);
  cprintf("Calendar");
  y1=0;
  t=0;
  while(y1<y)
  {
		 if((y1%100!=0 && y1%4==0) || y1%400==0)
		   t=t+366;
		 else
		   t=t+365;
		 y1++;
  }
  m1=1;
  while(m1<m)
  {
		 d=day(m1,y);
		 t=t+d;
		 m1++;
  }
  d=t%7;
  printf("Year: '%u'",y);
  printf("Month: '%s'",a[m-1]);

printf("%6s%6s%6s%6s%6s%6s%6s","Sun","Mon","Tue","Wed","Thu","Fri","Sat");
  textcolor(GREEN);
  k=1;
  for(i=1;i<=day(m,y);i++,k++)
  {
		 if(i==1)
		 {
		   if(d==0)
		   {
			 for(j=1;j<7;j++,k++)
			   printf("%6s","");
		   }
		   else
		   {
			  for(j=1;j<d;j++,k++)
				 printf("%6s","");
		   }
		 }
		 cprintf("%6d",i);
		 if(k%7==0)
		   printf("");
  }
  gotoxy(27,22);
  cprintf("www");

  getch();
}
*/