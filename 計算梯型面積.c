#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int i=0;
    char line[100];
    char *c1[100];
    char *p;
    char str[100];
    double a,b,h,s;
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
        a=atof(c1[0]);
        b=atof(c1[1]);
        h=atof(c1[2]);
        s = (a+b)*h/2;
        printf("Trapezoid area:%.1f\n",s);
    }
  return 0;
}
