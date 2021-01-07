#include<stdio.h> 
int main() {  
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)  //1~num開始測試
    {  
        if(a%i==0)  //可以被整除的就是因數
        {  
            if(i==a)  
            {
                printf("%d",i);
                break;
            }
            printf("%d ",i);
        }  
    }
    printf("\n");
    return 0;  
}  
