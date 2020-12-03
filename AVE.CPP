#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int A,B,C,D,Sum,Ave;
	clrscr();
	printf("Enter two values:\n");
	printf("A=");
	scanf("%d",&A);
	printf("B=");
	scanf("%d",&B);
	printf("C=");
	scanf("%d",&C);
	printf("D=");
	scanf("%d",&D);
	Sum=A+B+C+D;
	Ave=Sum/4;
	printf("Sum of foure Nos=%d\n",Sum);
	getch();
	printf("Average of foure Nos=%d",Ave);
	getch();
}
