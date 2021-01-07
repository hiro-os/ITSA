#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
int main(){
    int i=0,j=0,k=0,len=0;
    char str[100];
    char *c1[100],*c2[100];
    char *p;
    for(i=0;i<6;i++)
    {
        scanf("%s",str+len);
        len=strlen(str);
        str[len]=' ';
        str[len+1]='\0';
        len=strlen(str);
    }
    i=0;
    p=strtok(str," ");
    c1[i]=p;
    while(p)
    {
        p=strtok(NULL," ");
        i++;
        c1[i]=p;
    }
    for(j=i-1;j>=0;j--)
    {
        c2[k]=c1[j];
        printf("%s",c2[k]);
        if(j-1<0)
        {
            break;
        }
        printf(" ");
        k++;
    }
    printf("\n");
    return 0;
}
