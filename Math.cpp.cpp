#include<stdio.h>
#include<conio.h>
main()
{

	int A,B,Sum,Diff;
	clrscr();
	printf("Enter two values of 'A' and 'B' ;\n");
	printf("\nValue of 'A' =");
	scanf("%d",&A);
	printf("\nValue of 'B' =");
	scanf("%d",&B);
	Sum=A+B;
	Diff=A-B;
	printf("\nSum of 'A' and 'B' =%d",Sum);
	getch();
	printf("\n\nDiff b/w 'A' and 'B' =%d",Diff);
	getch();
}