#include<stdio.h>
int main()
{
    int num1,num2, count=0;
    scanf("%d",&num2);
    for(num1=2; num1<num2; num1++)
    {
        if(num2%num1==0)
            {
                count=1;
                //break;
            }
    }
     if(count==1)
        {
            printf("%d is not a prime number\n",num2);
        }
        else
        {
            printf("%d is a prime number\n",num2);
        }
}
