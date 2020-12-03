#include<stdio.h>
#include<conio.h>
main()
{
	int bp;
	float ca,hr,gp;
	clrscr();
	while(bp!=0)
		{
		 printf("\nBasic pay = ");
		 scanf("%d",&bp);
		 if(bp!=0)
			{
			 hr = (bp*25)/100;
			 ca = (bp*15)/100;
			 gp = bp+hr+ca;
			 printf("\nGross pay = %f",gp);
			}
		}
	getch();
	return 0;
}