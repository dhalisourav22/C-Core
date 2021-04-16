#include<stdio.h>
main()
{
    int n=1;
    do
    {
        printf("\n\nMultification table of %d \n",n);
        int i=1;
        do
        {
            printf("%d*%d=%d\n",n,i,n*i);
            i++;
        }
        while(i<=10);
        n++;
    }
    while(n<=10);
}

