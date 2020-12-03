#include<stdio.h>
#include<conio.h>
#include<process.h>
int top,a[10],i,c,e,j,k,t;
void push()
{

	if(top==10)
		printf("Stack Overflow !");
	else
		{
		printf("\nEnter Element = ");
		scanf("%d",&e);
		top++;
		a[top]=e;
		}
}
void pop()
{
	if(top==0)
		printf("Stack underflow !");
	else
		top--;
}
void empty()
{
	if(top==0)
		printf("YES! Stack is Empty");
	else
		printf("NO! Stack is not Empty");
}
void pstack()
{
	for(j=top;j>0;j--)
		printf("\n%d",a[j]);
}
void main()
{
	clrscr();
	printf("Enter Srack = ");
	for(i=1;i<=5;i++)
		scanf("%d",&a[i]);
	top=5;
	while(1)
		{
		 printf("\n1.Push\n2.Pop\n3.Empty\n4.Print\n5.Exit");
		 scanf("%d",&c);
		 switch(c)
			{
			 case 1:
				push();
				for(j=top;j>=1;j--)
					printf("\n%d",a[j]);
				break;
			 case 2:
				pop();
				for(k=top;k>=1;k--)
					printf("\n%d",a[k]);
				break;
			 case 3:
				empty();
				break;
			 case 4:
				pstack();
				break;
			 case 5:
				exit(0);
			 default:
				printf("Open your eyes and then enter choice");
				break;
			}
		}
}
