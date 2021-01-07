#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int i=0;
    char line[100];
    char *c1[100];
    char *p;
    char str[100];
    int a,b,s;
    while (fgets(line,100,stdin)!=NULL)  
    {  
        if(line[strlen(line)-1]=='\n')  
        {  
            line[strlen(line)-1]='\0';  
        }  
        for(i=0;c1[i]!=NULL;i++)  
        {  
            c1[i]=NULL;   
        }  
        i=0;
        p=strtok(line," ");  
        c1[i]=p;  
        while(p)  
        {  
            p=strtok(NULL," ");  
            i++;  
            c1[i]=p;  
        }
        a=atoi(c1[0]);
        b=atoi(c1[1]);
        s=a+b;
        s=s*s;
        printf("%d\n",s);

    }
  return 0;
}

