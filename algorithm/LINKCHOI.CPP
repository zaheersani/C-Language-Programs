#include<stdio.h>
#include<conio.h>
struct link
	{
	 int p;
	 int info;
	 link *next;
	}*first,*curt,*prev,*node;

void main()
{
	clrscr();
	node=new(link);
	printf("\nEnter information = ");
	scanf("%d",&node->info);
	node->next=NULL;
	first=curt=prev=node;
	do
		{
		node=new(link);
		printf("\nEnter new information = ");
		scanf("%d",&node->info);
		node->next=NULL;
		curt=node;
		prev->next=curt;
		prev=curt;
		printf("\nContinue(y/n)?");
		}while(getche()=='y');

	curt=first;
	while(curt!=NULL)
		{
		printf("\nInformation was = %d",curt->info);
		printf("\nAddress is = %d",curt->next);
		curt=curt->next;
		}
	getch();
}