#include<stdio.h>
#include<conio.h>
void main()
{
	int marks[100],sum=0,length;
	clrscr();
	printf("Enter length less than 100!!!");
	scanf("%d",&length);
	for(int i=1;i<=length;i++)
		{
		printf("Enter No %d = ",i);
		scanf("%d",&marks[i]);
		sum = sum + marks[i];
		}
	printf("sum = %d",sum);
	getch();
}