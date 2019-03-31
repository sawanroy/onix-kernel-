/*
	Just after login window will appear this menu 
	it contains different functionalties
*/

#include<conio.h>
#include<help.h>
#include<calc.h>
#include<back2log.h>
#include<time.h>
#include<game.h>
#include<dev.h>

void menu()
 {
  char ch;// for taking input
  time_t t;// for time display
  int h=0,m=0,s=0; //for stopwatch
  clrscr();
  printf("1. Calculator\n2. Help\n3. Dev\n4. Game\n5. Clean Screen\n6. Time & Date\n7. Stopwatch\n8. End\n");
  printf("write command \"h\" for getting help\n");
  printf("write command \"c\" for using calculator\n");
  printf("write command \"d\" for system details\n");
  printf("write command \"t\" for system time and date\n");
  printf("write command \"r\" to clean screen\n");
  printf("write command \"e\" to get back to login screen\n");
  
  fflush(stdin);
  scanf("%c",&ch);
  fflush(stdin);
  
  switch(ch)
  {
   case 'h' : help();
			  getch();
			  menu();
				 break;
   case 'c' : calc();
			  getch();
			  menu();
				 break;
   case 't' :  
			   time(&t);
			   clrscr();
			   gotoxy(38,13);
			  // textcolor(12);
			   printf("Date and time : %s",ctime(&t));
			   getch();
			   menu();
				 break;
				 
  /* stopwatch once started 
     can not take u back from current window to menu window	*/			 
   case 's' : 
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
				menu();
			   	   break;
   case 'r' : clrscr();
			  menu();
			     break;
   case 'd' : dev();
			  getch();
			  menu();
   	        	 break;	
   case 'g' : game();
			  menu();
			     break;
   case 'e' : b2log();
   	        	 break;
   default  : printf("command not found\n");
  }
  
  getch();
  }