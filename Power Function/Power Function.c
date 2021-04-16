#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c;
printf("\t\t\t\t\t\tWELCOME\n\n\t\t\t\t\tEnter The Base Value:");
scanf("%f",&a);
printf("\n\n\t\t\t\t\tEnter The Power Of the Base:");
scanf("%f",&b);
printf("\n\n\t\t\t\t\t   (%.1f)^%.1f = %.1f (ans)\n\n",a,b,c=pow(a,b));
return 0;
}
