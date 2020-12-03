#include<stdio.h>
#include<conio.h>
void main()
{
	int i,A[10],length,midv,midp,maxv,minv,ave,sum;
	clrscr();
	scanf("%d",&length);
	for(i=0;i<length;i++)
	{
	scanf("%d",&A[i]);
	}
	maxv=A[0];
	maxv=0;
	for(i=1;i<length;i++)
    {
	if(maxv<A[i])
	{
	maxv=A[i];
	maxv=i;
	}
    }
	minv=A[0];
	minv=0;
	for(i=1;i<length;i++)
    {
	if(minv>A[i])
	{
	minv=A[i];
	minv=i;
	}
    }
	midv=A[0];
	midp=0;
	sum=maxv+minv;
	ave=sum/2;
	for(i=1;i<length;i++)
    {
	if(ave==A[i])
	{
	midv=A[i];
	midp=i;
	}
    }
	printf("The mid value is %d on the place %d",midv,midp);
       /*	else
	printf("Data does not contain mid value");*/
	getch();
}
