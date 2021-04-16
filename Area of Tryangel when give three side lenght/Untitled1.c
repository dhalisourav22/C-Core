#include<stdio.h>
#include<math.h>
int main()
{
    float length_1,length_2,length_3,s,area;
    printf("Enter The First Length: ");
    scanf("%f",&length_1);
    printf("Enter The Second Length: ");
    scanf("%f",&length_2);
    printf("Enter The Third Length: ");
    scanf("%f",&length_3);
    s=(length_1+length_2+length_3)/2;
    area=sqrt(s*(s-length_1)*(s-length_1)*(s-length_3));
    printf("Area of the trayengel is= %f",area);
    return 0;

}
