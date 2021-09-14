#include<stdio.h>
#include<math.h>
int main()
{
    int i,j=2,no,k;
    printf("Enter the number : ");
    scanf("%d",&no);
    for(i=0; i<=no; i++)
    {
        k=pow(j,i);
        printf("%d ",k);
    }
}
