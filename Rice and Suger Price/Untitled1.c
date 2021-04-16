#include<stdio.h>
main()
{
    float am_ri,am_su,ri_value,su_value;
    printf("Enter The Amount Of Rice In KG: ");
    scanf("%f",&am_ri);
    printf("Enter The Amount Of Sugar In KG: ");
    scanf("%f",&am_su);
    printf("\n***LIST OF ITEMS***");
    printf("\a\nITEM\t\tPRICE\n\n");
    ri_value=am_ri*16.75;
    printf("RICE\t\t%f",ri_value);
    su_value=am_su*15;
    printf("\nSUGAR\t\t%f",su_value);
    getch();
    return 0;

}
