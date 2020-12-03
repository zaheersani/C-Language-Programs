#include<stdio.h>
#include<conio.h>
main()
{
	float s1,s2,s3,s4,s5,per;
	clrscr();
	printf("Enter Nos of five subjects");
	scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
	per = ((s1+s2+s3+s4+s5)*100)/500;
	if(per>=60)
		printf("\n1st Div with Percentage %f",per);
	if(per>=50&&per<60)
		printf("\n2nd Div with Percentage %f",per);
	if(per>=40&&per<50)
		printf("\n3rd Div with Percentage %f",per);
	if(per<40)
		printf("\nFail with Percentage %f",per);
	getch();
	return 0;
}