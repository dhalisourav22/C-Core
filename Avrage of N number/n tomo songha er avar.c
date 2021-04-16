#include<stdio.h>
int main()
{
    int no,i,j;
    float avr,sum=0;
    printf("How many number you want to avrage= ");
    scanf("%d",&no);
    for(i=1;i<=no;i++)
    {
        printf("Enter the number one by one= ");
        scanf("%d",&j);
        sum=sum+j;
    }
    avr=sum/no;
    printf("the avrage of those number is= %f",avr);
}
