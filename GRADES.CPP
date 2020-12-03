#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float A,B,C;
	clrscr();
	printf("Give the marks obtained by the student;\n");
	printf("\nMarks obtained=");
	scanf("%f",&A);
	printf("\nTotal marks=");
	scanf("%f",&B);
	C=(A*100)/B;
	printf("\nPercentage obtained=%.3f\n",C);
	if(C>=80)
		{
		 printf("\nThe student is given grade A+\n");
		}
	else
	if(C<80&&C>=70)
		{
		 printf("\nThe student is given grade A\n");
		}
	else
	if(C<70&&C>=60)
		{
		 printf("\nThe student is given grade B\n");
		}
	else
	if(C<60&&C>=50)
		{
		 printf("\nThe student is given grade C\n");
		}
	else
	if(C<50&&C>=40)
		{
		 printf("\nThe student is given grade D\n");
		}
	else
	if(C<40)
		{
		 printf("The student is given grade E");
		}
	getch();
}