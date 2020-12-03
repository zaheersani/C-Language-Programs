#include<stdio.h>
#include<conio.h>
#include<process.h>
int f,r,q[10],e,i,c;
void insert()
{
	do
		{
		if(r>=10)
			{
			printf("\nQueue Overflow !!!");
			break;
			}
		else
			{
			printf("\nElement = ");
			scanf("%d",&e);
//			r++;
			q[r]=e;
//			for(i=r-1;i>=f-1;i--)
//				printf("\n%d",q[i]);
			r++;
			printf("\nContinue Insertion (y/n)");
			}
		}while(getche()=='y'||getche()=='Y');
}

void del()
{
	do
		{
		if(f==r)
			{
			printf("\nQueue Underflow !!!");
			break;
			}
		else
			{
			f++;
			for(i=r-1;i>=f;i--)
				printf("\n%d",q[i]);
			printf("\nContinue Deletion (y/n)");
			}
		}while(getche()=='y'||getche()=='Y');
}

void emp()
{
	if(f==r)
		printf("\nYes! Queue is empty !");
	else
		printf("\nNo! Queue is not empty !");
}

void pri()
{
	for(i=r-1;i>=f;i--)
		printf("\n%d",q[i]);
}

void main()
{
	clrscr();
	f=0;
	r=0;
	while(1)
	{
	printf("\nRear is at [ %d ]",r);
	printf("\nFront is at [ %d ]",f);
	printf("\n1.Insertion\n2.Deletion\n3.Empty\n4.Print\n5.Exit");
	printf("\nEnter your choice = ");
	scanf("%d",&c);
	if(c>=1&&c<=5)
	{
	switch(c)
		{
		case 1:
			insert();
			for(i=r-1;i>=f;i--)
				printf("\n%d",q[i]);
			break;
		case 2:
			del();
			for(i=r-1;i>=f+1;i--)
				printf("\n%d",q[i]);
			break;
		case 3:
			emp();
			break;
		case 4:
			pri();
			break;
		case 5:
			exit(0);
		default:
			printf("Open Your Eyes And Then Enter Choice !!!");
			break;
		}
	}
	else
		printf("Correct one");
	}
}