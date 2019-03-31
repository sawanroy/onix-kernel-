/*
	depicts logging window
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<menu.h>

void log()
{
		char user[4],pass[4];
		char *uid="root";
		char *pwd="root";
		clrscr();
	x:	printf("%*s",44,"Login to continue\n\n");
		printf("%*s",20,"Username :");
		gets(user);
		
		//Checking the username is valid or not
		
	    	if(strcmp(uid,user)==0)
				{
					printf("%*s",20,"Password :");
					gets(pass);
					if(strcmp(pass,pwd)==0)
						{
							printf("%*s",42,"Welcome to OS\n");
							menu();
						}
					else
						{
							printf("Password is not valid\n");
							goto x;
						}
				}
			else
				{
					printf("Username is not valid\n");
					goto x;
					/*do
						{
							printf("Username is not valid\n");
							//	clrscr();
							printf("%*s",20,"Username :");
							gets(user);
							//goto x;
						}
					while(user!=uid);*/
				}
		
		getch();							
}