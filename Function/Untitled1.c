#include<stdio.h>
#include<math.h>
int main()
{
    float x,ans;
    printf("Enter The Value of x: ");
    scanf("%f",&x);
    ans=5*pow(x,9)-4*pow(x,5)+7*pow(x,4)-9*pow(x,2)+5;
    printf("Now The Answer Of f(X)= %f",ans);
    return 0;
}
