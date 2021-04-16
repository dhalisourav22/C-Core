#include<stdio.h>
int main()
{
    int i,j,no;
    scanf("%d",&no);
    for(i=1;i<=no;i++)
    {
        if(no%2==0)
        {
            printf("The number %d is divaided by 2\n",no);
            continue;
        }
        else
        {
            printf("The number %d is not divaided by 2\n",no);
            continue;
        }
        printf("sourav");

    }
}

