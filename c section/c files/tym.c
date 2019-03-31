
#include<stdio.h>
#include<conio.h>
#include<time.h>

void main()

{
	time_t t;
	time(&t);
	clrscr();
	textcolor(12);
	gotoxy(40,25);
	printf("Date and time : %s",ctime(&t));
	getch();
}
