#include<stdio.h>
int addition(int a,int b)
{
    return a+b;
}
int main()
{
    int num1,num2,result;
    printf("Enter two integer number = ");
    scanf("%d %d",&num1,&num2);
    result=addition(num1,num2);
    printf("the result is = %d",result);
}
