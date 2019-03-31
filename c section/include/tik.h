//program to tik tak toe

#include<stdio.h>
#include<conio.h>

void show(char a[3][3])
 {
     int i,j;
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             printf("%3c",a[i][j]);
         }
         printf("\n\n");
     }
 }

int status(char a[3][3],char ch)
{
    if(a[0][0]!='-' && a[0][0]==a[0][1] && a[0][0]==a[0][2])
    {
        //printf("%c is winner",ch);
        return 1;
    }

    if(a[1][0]!='-' && a[1][0]==a[1][1] && a[1][0]==a[1][2])
    {
      //  printf("%c is winner",ch);
      return 1;
    }

    if(a[2][0]!='-' && a[2][0]==a[2][1] && a[2][0]==a[2][2])
    {
      //  printf("%c is winner",ch);
        return 1;
    }

    if(a[0][0]!='-' && a[0][0]==a[1][0] && a[0][0]==a[2][0])
    {
        //printf("%c is winner",ch);
        return 1;
    }

     if(a[0][1]!='-' && a[0][1]==a[1][1] && a[0][1]==a[2][1])
    {
        //printf("%c is winner",ch);
        return 1;
    }

    if(a[0][2]!='-' && a[0][2]==a[1][2] && a[0][2]==a[2][2])
    {
       // printf("%c is winner",ch);
        return 1;
    }

    if(a[0][0]!='-' && a[0][0]==a[1][1] && a[0][0]==a[2][2])
    {
        //printf("%c is winner",ch);
        return 1;
    }

    if(a[0][2]!='-' && a[0][2]==a[1][1] && a[0][2]==a[2][0])
    {
       // printf("%c is winner",ch);
        return 1;
    }
 return 0;
}


void tik()
{
  char a[3][3]={ {'-', '-', '-'} , {'-', '-', '-'} , {'-', '-', '-'} };
  char ch='X';
  int i,j,r,c,stat;
  clrscr();
  show(a);
  for(i=1;i<9;i++)
  {
      stat=status(a,ch);
          if(stat==1)
          {
              printf("%c is winner",ch);
              break;
          }
      if(i%2!=0)
      {
          ch='X';
          stat=status(a,ch);
          if(stat==1)
          {
              printf("%c is winner",ch);
              break;
          }
          else
          {
              printf("Turn of %c\n",ch);
              printf("Enter row & col\n");
              scanf("%d%d",&r,&c);
              a[r-1][c-1]=ch;
              show(a);
          }

      }
      else
      {
          ch='O';
          status(a,ch);
          if(stat==1)
          {
              printf("%c is winner",ch);
              break;
          }
          else
          {
                printf("Turn of %c\n",ch);
                printf("Enter row & col\n");
                scanf("%d%d",&r,&c);
                a[r-1][c-1]=ch;
                show(a);
          }
      }
  }

  getch();
}
