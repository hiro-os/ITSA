#include<stdio.h>
int main()
{
    int i=0,j=0;
    int x,y;
    scanf("%d %d",&x,&y);
    for(i=0;i<y;i++)
    {
        for(j=0;j<x;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

