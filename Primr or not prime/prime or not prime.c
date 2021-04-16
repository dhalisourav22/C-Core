#include<stdio.h>
int main()
{
    int i,no,count;
    printf("Enter the number");
    scanf("%d",&no);
    for(i=2; i<no; i++)
    {
        if(no%i==0)
        {
            count=1;
            break;
        }
    }
    if(count==1)
    {
        printf("The number %d is not prime",no);
    }
    else
        printf("The number %d is prime",no);
}
