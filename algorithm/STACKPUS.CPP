#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
	static int a[100],l,e,n=9,t,j,g=6,k,s=12,c=1;
	clrscr();
	printf("length = ");
	scanf("%d",&l);
	printf("Array = ");
	for(int i=0;i<=l;i++)
		{
		scanf("%d",&a[i]);
		gotoxy(s,2);
		s=s+3;
		}
	do
	{
	gotoxy(33,g);
	printf("Element %d = ",c);
	scanf("%d",&e);
	t=i-1;
	if(t>=n)
		{
		gotoxy(33,18);
		printf("Overülow stack ");  //Ctrl+6()  Alt+159 (ü)
		getch();
		exit(0);
		}
	else
		{
		t++;
		a[t]=e;
		}
	printf("\n\n");
	k=24;
	for(i=0;i<=l+1;i++)
		{
		gotoxy(10,k);
		printf("%d\n",a[i]);
		k=k-2;
		}

	for(j=5;j<=25;j++)
		{
		gotoxy(7,j);
		printf("≥");   //Alt+179
		}
	for(j=5;j<=25;j++)
		{
		gotoxy(15,j);
		printf("≥");
		}
/*	for(j=5;j<=25;j=j+1)
		{
		gotoxy(8,j);
		printf("_______");
		}*/
	gotoxy(30,4);
	printf("Continue Pushing  elements(y/n)?"); //Ctrl + -
	l++;
	c++,
	g++;
	i=l+1;
	}while(getch()=='y');
	getch();
}