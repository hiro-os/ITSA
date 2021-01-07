#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main()
{
    int i=0;
    int x;
    char c[100];
    scanf("%d",&x);
    snprintf(c,100,"%d",x);
    for(i=0;i<strlen(c);i++)
    {
        printf("%c",c[i]);
        if(i+1==strlen(c))
        {
            printf("\n");
            break;
        }
        printf("   ");
    }
    return 0;
}
