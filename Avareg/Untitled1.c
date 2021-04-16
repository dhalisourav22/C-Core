#include<stdio.h>
main()
{
    float num_1,num_2,num_3,avr;
    printf("Enter The First Number: ");
    scanf("%f",&num_1);
    printf("Enter The Second Number: ");
    scanf("%f",&num_2);
    printf("Enter The Third Number: ");
    scanf("%f",&num_3);
    avr=(num_1+num_2+num_3)/3;
    printf("Average Of Three Number Is= %f",avr);
    getch();
    return 0;

}
