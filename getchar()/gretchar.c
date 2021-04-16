#include<stdio.h>
int main()
{
    char ans;
    printf("Do you whant to know my name?\n");
    printf("If you prase y that is sey you want to know and If you prase n that is sey you dont want to know= \n");
   getchar(ans);
    switch(ans)
    {
    case'y':
    case'Y':
        printf("my name is sourav");
        break;
    default:
        printf("It's ok dear");
    }
    return 0;
    getch();
}
