#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float A,B,C,D,Sum,Diff,Mult,Div,Sqr,Cube,Tetra,Penta,Ave;
	clrscr();
	printf("Enter four values;\n");
	printf("\nA=");
	scanf("%f",&A);
	printf("\nB=");
	scanf("%f",&B);
	printf("\nC=");
	scanf("%f",&C);
	printf("\nD=");
	scanf("%f",&D);
	Sum=A+B+C+D;
	Diff=A-B;
	Diff=B-C;
	Diff=C-D;
	Mult=A*B*C*D;
	Div=A/B;
	Div=B/C;
	Div=C/D;
	Sqr=pow(A,2);
	Cube=pow(B,3);
	Tetra=pow(C,4);
	Penta=pow(D,5);
	Ave=Sum/4;
	printf("\nSum of four Nos=%.3f\n",Sum);
	getch();
	printf("\nDiff b/w A & B=%.3f\n",Diff);
	getch();
	printf("\nDiff b/w B & C=%.3f\n",Diff);
	getch();
	printf("\nDiff b/w C & D=%.3f\n",Diff);
	getch();
	printf("\nProduct of four Nos=%.3f\n",Mult);
	getch();
	printf("\nDivision A/B=%.3f\n",Div);
	getch();
	printf("\nDivision B/C=%.3f\n",Div);
	getch();
	printf("\nDivision C/D=%.3f\n",Div);
	getch();
	printf("\nSqare of A=%.3f\n",Sqr);
	getch();
	printf("\nCube of B=%.3f\n",Cube);
	getch();
	printf("\n4th power of C=%.3f\n",Tetra);
	getch();
	printf("\n5th power of D=%.3f\n",Penta);
	getch();
	printf("\nAverage of four Nos=%.3f\n",Ave);
	getch();
	printf("\nTHE END");
	getch();
}
