
#include<stdio.h>
#include<conio.h>
#include<dos.h>

void stop()
{
	int h=0,m=0,s=0;
	while(1)
	{
		if(s>59)
		{
			m=m+1;
			s=0;
		}
		if(m>59)
		{
			h=h+1;
			m=0;
		}
		if(h>11)
		{
			h=0;
			m=0;
			s=0;
		}
		delay(1000);
		s=s+1;
		clrscr();
		textcolor(12);
		gotoxy(38,13);
		printf("%d:%d:%d",h,m,s);
	}
	getch();
}