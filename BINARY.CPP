#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
void main(void)
{
int d=-1,a,b=0,c[100],e=3; textbackground(RED);textcolor(YELLOW);
clrscr();
window(10,5,70,20); textbackground(MAGENTA);
clrscr();
printf("\n\t\tENTER THE DICIMAL MUBER\t\t");
scanf("%d",&a);
delay(3000);
printf("\n\t\t\x07 \x07\x07THE BINARY NUMBER IS");
if(a<2)
	{
	 if(a==1)
	 printf("\t1");
	 if(a==0)
	 printf("\t0");
	 if(a<0) exit(0);
	}
	 else{printf("\t");
	 do{c[++d]=a%2;a=a/2;
	}
	 while(a>0);
	 while(d>=0) printf("%d",c[d--]);
	}
 getch();
}
