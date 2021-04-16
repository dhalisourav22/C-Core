#include<stdio.h>
int main()
{
    int i,count=0,no,num,sum=0;
    float aver;
    printf("how long you want to give the number : ");
    scanf("%d",&no);
    for(i=1; i<=no; i++)
    {
        printf("Enter the number : ");
        scanf("%d",&num);
        if(num%2==0)
        {
            sum+=num;
            count++;
        }
    }
    aver=sum/count;
    printf("%f is the average of those even number",aver);
}
