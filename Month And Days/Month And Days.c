#include<stdio.h>
#include<math.h>
int main()
{
int day,month,days;
printf("\t\t\t\t\t\t\tWELCOME\n\n\t\t\t\t\tA Program To determine Month And Days\n\n\t\t\t\t\tPLease Enter The Days:");
scanf("%d",&day);
printf("\n\t\t\t\t%d Is Eqavilent To -- %d Month/Months And %d Day/Days\n\n",day,month=day/30,days=day%30);
printf("------------------------------------------------------------------------------------------------------------------------\n\n");
return 0;
}
