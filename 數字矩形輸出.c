#include<stdio.h>
int main()
{
    int i=0,j=0;
    int x;
    scanf("%d",&x);
    for(i=0;i<x-1;i++)
    {
        for(j=0;j<=i;j++)
        {       
            printf("%d",j+1);
        }
        for(j=x;j>=i+2;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}

