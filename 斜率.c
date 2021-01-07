#include<stdio.h>
int main()
{
    int i,x1,y1,x2,y2,m;
    for(i=0;i<2;i++)
    {
        scanf("%d %d",&x2,&y2);
        if(i==0)
        {
            x1=x2;
            y1=y2;
        }
        else
        {
            m=(y1-y2)/(x1-x2);
            printf("%d\n",m);
        }
    }
    return 0;
}
