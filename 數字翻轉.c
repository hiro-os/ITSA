#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,j=0,x;
    char c[100];
    char p[100];
    scanf("%d",&x);
    snprintf(c,100,"%d",x);
    for(i=strlen(c)-1;i>=0;i--)
    {
        if(c[i]!='0')
        {
            p[j]=c[i];
            j++;
        }
    }
    p[j]='\0';
    printf("%s\n",p);
}
    
