//program to check matrix is magic square or not

#include<stdio.h>
#include<conio.h>

void show1(int a[3][3])
 {
    int i,j;
    for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
                {
                    printf("%6d",a[i][j]);
                }
        printf("\n");
        }
 }


 void check(int a[3][3])
  {

    int p1,p2,p3,p4,p5,p6,p7,p8;

    p1=a[0][0]+a[0][1]+a[0][2];
    p2=a[1][0]+a[1][1]+a[1][2];
    p3=a[2][0]+a[2][1]+a[2][2];
    p4=a[0][0]+a[1][0]+a[2][0];
    p5=a[0][1]+a[1][1]+a[2][1];
    p6=a[0][2]+a[1][2]+a[2][2];
    p7=a[0][0]+a[1][1]+a[2][2];
    p8=a[0][2]+a[1][1]+a[2][0];


    if(p1==p2&&p2==p3&&p3==p4&&p4==p5&&p5==p6&&p6==p7&&p7==p8)
    {
        printf("\n\nMagic Square");
    }
    else
    {
        printf("\n\nnot Magic Square");
    }

  }

void magic()
{
    int a[3][3]={ {0}, {0}, {0} };

    int i,j,temp=0;
	clrscr();
    printf("Enter elements between (1-9) in 3x3 matrix without any repetition\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
            if(temp==a[i][j])
                {
                    printf("You have already used this value\n\tenter other values\n");
                    j--;
                }
            else
               {
                 show1(a);
                 temp=a[i][j];
               }

        }
    }
    check(a);
    getch();
}
