#include<stdio.h>
int subtitution(int a,int b)
{
    return a-b;
}
int main()
{
    int num1,num2,result;
    printf("Enter two integer number = ");
    scanf("%d %d",&num1,&num2);
    //result=subtitution(num1,num2);
    printf("the result is = %d",subtitution(num1,num2));
}
