#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);
    if(year%400==0)
        printf("%d is leap year.\n",year);
    else if(year%100!=0&&year%4==0)
        printf("%d is a leap year.\n",year);
    else
        printf("%d isn't a leap year.\n",year);

    return 0;
}
