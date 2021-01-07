#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(90<=x&&x<=100)
    {
        printf("A\n");
        return 0;
    }
    if(80<=x&&x<=89)
    {
        printf("B\n");
        return 0;
    }
    if(70<=x&&x<=79)
    {
        printf("C\n");
        return 0;
    }
    if(60<=x&&x<=69)
    {
        printf("D\n");
        return 0;
    }
    if(60<x&&x<0)
    {
        printf("E\n");
        return 0;
    }
    else
    {
        printf("error\n");
        return 0;
    }
    return 0;
}
