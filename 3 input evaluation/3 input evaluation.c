#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter The First Value:");
    scanf("%d",&x);
    printf("Enter The Second Value:");
    scanf("%d",&y);
    printf("Enter The Third Value:");
    scanf("%d",&z);
    if(x<y<z)
    {
        printf("%d<%d<%d",x,y,z);
    }
    else if(x<z<y)
    {
        printf("%d<%d<%d",x,z,y);
    }
    else if(y<z<x)
    {
        printf("%d<%d<%d",y,z,x);
    }
    else if(y<x<z)
    {
        printf("%d<%d<%d",y,x,z);
    }
}
