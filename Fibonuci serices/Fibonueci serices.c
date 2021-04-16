#include<stdio.h>
int main()
{
    int i,num_1=1,num_2=1,num_3,no;
    printf("enter the number = ");
    scanf("%d",&no);
    printf("%d %d ",num_1,num_2);
    for(i=1; i<=no-2; i++)
    {
        num_3=num_1+num_2;
        num_1=num_2;
        num_2=num_3;
        printf("%d ",num_3);
    }
}
