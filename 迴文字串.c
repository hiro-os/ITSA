#include<stdio.h>  
#include<string.h>  
int main()  
{  
    int i=0,j=0,k=0,count;  
    char c[100];  
    char a[100];  
    scanf("%d",&count); 
    if(count>0&&count<100)
    {
        for(i=0;i<count;i++)  
        {  
            k=0;  
            for(j=0;j<strlen(a);j++)  
            {  
                a[j]='\0';  
            }  
            scanf("%s",c);  
            for(j=strlen(c)-1;j>=0;j--)  
            {    
                a[k]=c[j];  
                k++;  
            }
            a[k]='\0';
            printf("%s\n",a);  
        }
    }  
    return 0;  
}  
