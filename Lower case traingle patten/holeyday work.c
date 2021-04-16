#include<stdio.h>
#include<math.h>
int main()
{
    float i,n,sum=0;
    scanf("%f",&n);
    for(i=1; i<=n; i++)
    {
        sum+=(1/pow(i,2));
    }
    printf("%f",sum);
}
