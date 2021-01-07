#include <stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,p=1;
    scanf("%d",&n);
    if(n<0)
    {
        exit(0);
    }
    if(n<20)
    {
        for(i=1;i<=n;i++)
        {
            p = p * i;
        }
        printf("%d\n",p);
    }
    return 0;
}
