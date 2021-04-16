#include<stdio.h>
int main()
{
    int i,j,k,s,no;
    char sym;
    printf("Enter the symbol of daimon= ");
    scanf("%c",&sym);
    printf("Enter the row number= ");
    scanf("%d",&no);
    if(no%2==0)
        no++;
    s=(no/2)+1;
    for(i=1;i<=(no/2)+1;i++)
    {
        for(j=1;j<=s;j++)
        {
             printf(" ");
        }
        s--;
        for(k=1;k<=(i*2)-1;k++)
        {
            printf("%c",sym);
        }
        printf("\n");

    }
    /*s=2;
    for(i=(no/2);i>=1;i--)
    {
        for(j=1;j<=s;j++)
        {
            printf(" ");
        }
        s++;
        for(k=1;k<=(i*2)-1;k++)
        {
            printf("%c",sym);
        }
        printf("\n");

    }*/
    getch();
}
