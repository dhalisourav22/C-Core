#include<stdio.h>
#include<math.h>
int main()
{
char a;
printf("\t\t\t\t\t\t\tWELCOME\n\n\t\t\t\t\t\tIdentifying Vauel and Consonant\n\n\t\t\t\t\t\tEnter Any Alphabet To Identify:");
scanf("%c",&a);
if((a==65)||(a==69)||(a==73)||(a==79)||(a==85)||(a==97)||(a==101)||(a==105)||(a==111)||(a==117))
{
    printf("\t\t\t\t\t\t%c Is A Vouel",a);
}
else
{
    printf("\t\t\t\t\t\t( %c ) Is A Consonant",a);
}
return 0;

}
