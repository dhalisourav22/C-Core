#include<stdio.h>
#include<math.h>
void main()
{
float x,s,a,b,c,d;
printf("\t\t\t\t\t\t WELCOME\n");
printf("\n\t\t\t\t\t      Given Function:\n\n\t\t\t\t\t f(x)= 3x^9-2x^5+3x^4-3x^2-10\n\n");
printf("\t\t\t\t\t Enter A Intenger Value Of (x)\n\n\t\t\t\t\t   x = ");
scanf("%f",&x);
printf("\n\t\t\t\t      => f(%.0f)= 3(%.0f)^9-2(%.0f)^5+3(%.0f)^4-3(%.0f)^2-10\n",x,x,x,x,x,x);
printf("\n\t\t\t\t      => f(%.0f)= %.0f-%.0f+%.0f-%.0f-10\n\n",x,a=3*pow(x,9),b=2*pow(x,5),c=3*pow(x,4),d=3*pow(x,2));
printf("\t\t\t\t      => f(%.0f)= %.0f (Ans)\n\n",x,s=(3*pow(x,9))-(2*pow(x,5))+(3*pow(x,4))-(3*pow(x,2))-10);
printf("------------------------------------------------------------------------------------------------------------------------\n\n");
getch();
return 0;
}
