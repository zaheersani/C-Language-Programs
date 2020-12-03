#include<stdio.h>
#include<conio.h>
#include<string.h>
struct data
{
	char name[81];
	int roll;
	float g;
} x[10];

void main()
{
	clrscr();
	for(int h=1;h<=5;h++)
		{
		printf("%d. ",h);
		printf("Name = ");
		scanf("%s",x[h].name);
		printf("Roll # ");
		scanf("%d",&x[h].roll);
		printf("GPA = ");
		scanf(" %f ",x[h].g);
		}
	getch();
}