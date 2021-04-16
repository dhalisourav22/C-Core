#include<stdio.h>
int main()
{
    int i,j;
    for(i=1; i<=10; i++)
    {
        int count=0;
        for(j=2; j<i; j++)
        {
            if(i%j==0)
            {
                count=1;
                break;
            }
        }
        if(count==1)
        {
            printf("%d number is not prime\n",i);
        }
        else
        {
            printf("%d number is prime\n",i);
        }
    }
}
