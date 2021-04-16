#include<stdio.h>
int main()
{
    int i,j,user_n;
    printf("enter the number=");
    scanf("%d",&user_n);
    for(i=1; i<=user_n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%c ",j+64);
        }

        printf("\n");
    }
}
