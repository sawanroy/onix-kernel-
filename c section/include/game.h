#include<tik.h>
#include<magic.h>

void game()
{
 char ch;
 clrscr();
 gotoxy(25,25);
 printf("Welcome to ONIX Games\n");
 printf("1. Tik-Tak-Toe\n");
 printf("2. Magic Square\n");
 printf("enter choice\n");
 scanf("%c",&ch);
 switch(ch)
  {
   case '1' : tik();
			  break;
   case '2' : magic();
			  break;
   default  : printf("Enter correct choice\n");
  }
 getch();
}