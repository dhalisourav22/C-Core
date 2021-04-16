#include<stdio.h>
int main()
{
    int x;
    printf("Enter the value= ");
    scanf("%d",&x);
    if (x%3==0&&x%5==0&&x%10==0&&x%100==0)
        printf("the number is define by 3, 5, 10 and 100");
    else if (x%3==0&&x%5==0&&x%10==0)
        printf("the number is define by 3, 5 and 10");
    else if (x%100==0&&x%5==0&&x%10==0)
        printf("the number is define by 5, 10 and 100");
    else if (x%3==0&&x%5==0)
        printf("the number is define by 3 and 5");
    else if (x%10==0&&x%100==0)
        printf("the number is define by 10 and 100");
    else if (x%3==0)
        printf("the number is define by 3");
    else if (x%5==0)
        printf("the number is define by 5");
    else if (x%10==0)
        printf("the number is define by 10");
    else if (x%100==0)
        printf("the number is define by 100");
    else
        printf("the number is not define by 3, 5, 10 and 100");
    getch();
    return 0;
}

