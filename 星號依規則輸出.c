#include<stdio.h>
int main()
{
    int i=0,j=0;
    int x,y;
    scanf("%d %d",&x,&y);
        if(x<y)
        {
            while(1)
            {
                for(i=0;i<x;i++)
                {
                    printf("*");
                }   
                if(x==y)
                {
                    printf("\n");
                    return 0;
                }
                x++;
                printf("\n");
            }
        }
        if(x==y)
        {
            while(1)
            {
                for(i=0;i<x;i++)
                {
                    for(j=0;j<y;j++)
                    {
                        printf("*");
                    }
                    printf("\n");
                }
                return 0;
            }
        }
        if(x>y)
        {
            while(1)
            {
                for(i=0;i<x;i++)
                {
                    printf("*");
                }
                if(x==y)
                {
                    printf("\n");
                    return 0;
                }
                x--;
                printf("\n");
            }
        }
    return 0;
}

