/*
 A header file "used as calculator" which is needed to be copied in the bin or include folder where
 all other header files resides.
*/
#include<stdio.h>
#include<conio.h>
#include<add.h>
#include<sub.h>
#include<mul.h>
#include<div.h>
void calc()
{
	char cl;
	float a,b;
	printf("1. +\n2. -\n3. * \n4. /\n");
	printf("Enter choice\n");
	fflush(stdin);
	scanf("%c",&cl);
	fflush(stdin);
	switch(cl)
	{
		case '+' :   add(a,b);
					 scanf("%f%f",&a,&b);
					 printf("Sum is: %0.2f\n\n",add(a,b));
					 break;
		case '-' :   sub(a,b);	
					 scanf("%f%f",&a,&b);
					 printf("Sub is: %0.2f\n\n",sub(a,b));
					 break;
		case '*' :   mul(a,b);
					 scanf("%f%f",&a,&b);
					 printf("Mul is: %0.2f\n\n",mul(a,b));
					 break;
		case '/' :   div(a,b);
					 scanf("%f%f",&a,&b);
				   	 printf("Div is: %0.2f\n\n",div(a,b));	
					 break;
		default  :   printf("Command not found\n");
	}
}