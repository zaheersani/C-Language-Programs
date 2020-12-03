#include<stdio.h>
#include<conio.h>
main()
{
	float cp,sp,in,per;
	printf("Cost price = ");
	scanf("%f",&cp);
	printf("Selling price = ");
	scanf("%f",&sp);
	in = sp - cp;
	if(in>0)
		{
		 printf("\nSeller got profit of %f percent",in);
		}
	else
	if(in<0)
		{
		 per = (-in);
		 printf("\nSeller got loss of %f percent",per);
		}
	else
	if(in==0)
		{
		 printf("\nSeller got profit and loss of 0 percent");
		}
	getch();
	return 0;
}