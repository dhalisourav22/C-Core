#include<stdio.h>
int main()
{
    int year,a,b,c,avr;
    printf("Enter the year= ");
    scanf("%d",&year);
    if(year==2015)
    {
        printf("First class test number= ");
        scanf("%d",&a);
        printf("second class test number= ");
        scanf("%d",&b);
        printf("Third class test number= ");
        scanf("%d",&c);
        avr=(a+b+c)/3;
        if(avr>=70&&avr<=74)
        {
            printf("He get A+");
        }
        else if(avr>=65&&avr<=69)
        {
            printf("He get A");
        }
        else if(avr>=60&&avr<=64)
        {
            printf("He get B");
        }
        else if(avr<60)
        {
            printf("He get C");
        }
    }
     else if(year==2016)
    {
        printf("First class test number= ");
        scanf("%d",&a);
        printf("second class test number= ");
        scanf("%d",&b);
        avr=(a+b)/2;
        if(avr>=70&&avr<=74)
        {
            printf("He get A+");
        }
        else if(avr>=65&&avr<=69)
        {
            printf("He get A");
        }
        else if(avr>=60&&avr<=64)
        {
            printf("He get B");
        }
        else if(avr<60)
        {
            printf("He get C");
        }
    }
    else
    {
        printf("First class test number= ");
        scanf("%d",&a);
        avr=a;
        if(avr>=70&&avr<=74)
        {
            printf("He get A+");
        }
        else if(avr>=65&&avr<=69)
        {
            printf("He get A");
        }
        else if(avr>=60&&avr<=64)
        {
            printf("He get B");
        }
        else if(avr<60)
        {
            printf("He get C");
        }
    }
}
