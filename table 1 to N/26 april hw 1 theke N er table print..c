#include<stdio.h>
int main()
{
    int n=1,user_n;
    printf("enter the number of table= ");
    scanf("%d",&user_n);
    do
    {
        printf("\n\nTable of %d is= \n",n);
        int i=1;
        do
        {
            printf("\t%d*%d=%d\n",n,i,n*i);
            i++;
        }
        while(i<=10);
        n++;
    }
    while(n<=user_n);
    return 0;
}
