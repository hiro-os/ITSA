#include<stdio.h>
int main()
{
    int i=0,j=0;
    int x,y,s;
    scanf("%d %d",&x,&y);
    s=(x*y)/2;
    if(s>200)
    {
        printf("outside\n");
    }
    else
    {
        printf("inside\n");
    }
    return 0;
}
