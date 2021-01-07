#include <stdio.h>   
#include <string.h>   
#include <stdlib.h>   
int main(){  
    int i=0,j=0,k=0;  
    char line[100];  
    char *c1[100],*c2[100];  
    char *p;  
    while (fgets(line,100,stdin)!=NULL)  
    {  
        if(line[strlen(line)-1]=='\n')  
        {  
            line[strlen(line)-1]='\0';  
        }  
        for(i=0;c1[i]!=NULL;i++)  
        {  
            c1[i]=NULL;  
            c2[i]=NULL;  
        }  
        p=strtok(line," ");  
        i=0,j=0,k=0;  
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
    }  
     return 0;  
}  
