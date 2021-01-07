#include<stdio.h>
int main()
{
    int i=0,j=0,k=1;
    int x;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        for(j=i;j<x;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
