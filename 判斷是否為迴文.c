#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main()
{
    int i=0,len=0,len2=0;
    int x,ok=0;
    char c[100],c1[100];
    scanf("%d",&x);
    snprintf(c,100,"%d",x);
    len2=strlen(c)-1;
    strcpy(c1,c);
    if(strlen(c)%2==0)
    {
        len=strlen(c)/2;
    }
    else
    {
        len=strlen(c)/2+1;
    }
    for(i=0;i<len;i++)
    {
        if(c[i]==c1[len2])
        {
            ok=1;
        }
        if(c[i]!=c1[len2])
        {
            ok=0;
        }
        len2--;
    }
    if(ok==1)
    {
        printf("YES\n");
    }
    if(ok==0)
    {
        printf("NO\n");
    }
    return 0;
}

