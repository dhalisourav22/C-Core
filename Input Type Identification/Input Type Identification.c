#include<stdio.h>
#include<math.h>
int main()
{
char x;
restart:
printf("\t\t\t\t\t\tWELCOME\n\n\t\t\t\t\tIdentifying Input Type\n\n\t\t\t\t\tEnter Any Input To Identify:");

scanf("%c",&x);
if((x>='0')&&(x<='9'))
{
    if(x%2==0)
{
    printf("\n\t\t\t\t\tGiven Input = (%c)\n\n\t\t\t\t\tInput Type = Digit (Even)\n\n",x);

}
else
{
    printf("\n\t\t\t\t\tGiven Input = (%c)\n\n\t\t\t\t\tInput Type = Digit (Odd)\n\n",x);

}
}
else if(((x>='A')&&(x<='Z'))||((x>='a')&&(x<='z')))
{
 if((x==65)||(x==69)||(x==73)||(x==79)||(x==85)||(x==97)||(x==101)||(x==105)||(x==111)||(x==117))
{
    printf("\n\t\t\t\t\tGiven Input = (%c)\n\n\t\t\t\t\tInput Type = Alphabet (Vouel)\n\n",x);

}
else
{
    printf("\n\t\t\t\t\tGiven Input = (%c)\n\n\t\t\t\t\tInput Type = Alphabet (Consonant)\n\n",x);

}
}
else if(((x>=0)&&(x<='/'))||((x>=':')&&(x<='@'))||((x>='[')&&(x<='`'))||((x>='{')&&(x<=127)))
{
   printf("\n\t\t\t\t\tGiven Input = (%c)\n\n\t\t\t\t\tInput Type = Spacial Character\n\n",x);

}
else
{
    printf("\n\t\t\t\t\t\tEror Type\n\n");
    goto restart;
}
return 0;
}
