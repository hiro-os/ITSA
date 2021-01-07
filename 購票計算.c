#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
        int i=0;
        int n1=0,n2=0,n3=0;
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
            while(1)
            {
                if(a>=10)
                {
                    a=a-10;
                    n1++;
                }
                if(a<10)
                {
                    break;
                }
            }
            printf("NT10=%d\n",n1);
            while(1)
            {
                if(a>=5)
                {
                    a=a-5;
                    n2++;
                }
                if(a<5)
                {
                    break;
                }
            }
            printf("NT5=%d\n",n2);
            while(1)
            {
                if(a>=1)
                {
                    a=a-1;
                    n3++;
                }
                if(a<1)
                {
                    break;
                }
            }
            printf("NT1=%d\n",n3);
        }
        return 0;
}
