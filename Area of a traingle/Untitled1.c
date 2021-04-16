#include<stdio.h>
int main()
{
    float base,hight,area;
    printf("Give The Base of The Trayngle: ");
    scanf("%f",&base);
    printf("Give The Hight of The Trayngle: ");
    scanf("%f",&hight);
    area=0.5*base*hight;
    printf("Area Of The Trayngle is= %f",area);
    getch();
    return 0;
}
