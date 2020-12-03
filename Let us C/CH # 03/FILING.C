#include<stdio.h>
#include<conio.h>
main()
{
	double miles,kms;
	clrscr();
	FILE *inp;
	FILE *out;
	inp = fopen("C:\1\ data.dat","r");
	out = fopen("C:\ me.out","w");
	fscanf(inp,"%f",&miles);
	fprintf(out,"The distance in miles %f",miles);
	kms = 1.609*miles;
	fprintf(out,"miles = %f km",kms);
	fclose(inp);
	fclose(out);
	getch();
	return 0;
}