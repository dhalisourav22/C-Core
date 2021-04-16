#include<stdio.h>
#include<math.h>
#define PI 3.1416
int main()
{
    double r,ans;
    printf("\nGive The Redious Of circle: ");
    scanf("%lf",&r);
    ans=PI*pow(r,2);
    printf("Area Of The Circle= %lf",ans);
    getch();
    return 0;
}

