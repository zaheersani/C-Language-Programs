#include<stdio.h>
#include<conio.h>
main()
{
	int age;
	char sex,ms;
	clrscr();
	printf("Married (y/n)? = ");
	scanf("%c",&ms);
	if(ms=='y')
	printf("Driver is insured!");
	else
	if(ms=='n')
		{
		 printf("Age = ");
		 scanf("%d",&age);
		 if(age>25)
			{
			 printf("Sex (m/f) = ");
			 scanf(" %c",&sex);
			 if(sex=='m')
				{
				 if(age>30)
				 printf("Driver is insuerd!!");
				 else
				 printf("Driver is not insured");
				}
			 if(sex=='f')
				{
				 printf("Driver is insured!!!");
				}
			 }
		 else
		 printf("Driver is not insured");
		 }
	getch();
	return 0;
}
