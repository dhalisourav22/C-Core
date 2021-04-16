#include<stdio.h>
int main()
{
  int x;
    printf("\t\t\t\t WELCOME\t\tA Program To Evaluate Even Or Odd Number\n\n\t\tInput The Number  You want to Evaluate:");
    scanf("%d",&x);

    if(x%2==0)
    {
        printf("\t\t\t\t\n\n( Even Number )\n\n");
    }
    else
    {
        printf("\n\n\t\t\t\t( Odd Number )\n\n");
    }
    return 0;
}

