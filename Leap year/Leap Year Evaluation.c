#include<stdio.h>
int main()
{
  int x;
  printf("  WELCOME\nA Program To Evaluate Leap Year\nEnter The Year  You want to Evaluate:");
    scanf("%d",&x);
    if((x%4==0)&&(x%100!=0)||(x%400==0))
    {
      printf("\n \t%d is a Leap year\n\n",x);
    }


else
    {
        printf("\n %d is not a Leap year\n\n",x);
    }
    return 0;
}
