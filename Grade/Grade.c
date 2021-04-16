#include<stdio.h>
int main()
{
    int mark;
    printf("\t\t\t\tEnter The Mark To Know The Grade:");
    scanf("%d",&mark);
    switch(mark/10)
    {
       case 10:
       case  9:
       case  8: printf("\t\t\t\tYour Grade Is A+\n");
       break;
       case  7: {printf("\t\t\t\tYour Grade Is A\n");
                 printf("\t\t\t\tWell Done");}
       //break;
       case  6:  printf("\t\t\t\tYour Grade Is A-\n");
       break;
       case  5:  printf("\t\t\t\tYour Grade Is B\n");
       break;
       case  4:  printf("\t\t\t\tYour Grade Is C\n");
       break;
       default : printf("\t\t\t\tYou have Failed The Exam\n");
    }
    getch();
}
