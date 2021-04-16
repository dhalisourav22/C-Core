#include<stdio.h>
main()
{
    int n=1;
    while(n<=10)
    {
        printf("\n\nMultification table of %d \n",n);
        int i=1;
        while(i<=10)
        {
            printf("%d*%d=%d\n",n,i,n*i);
            i++;
        }
        n++;
    }
}
