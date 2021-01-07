#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
        int i=0,count=0;
        int n1=0,n2=0,n3=0;
        char line[100];
        char *c1[100];
        char *p;
        char str[100];
        int a1,a2,b1,b2,s1,s2,coin=0,total1=0,total2=0;
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
            if(count==0)
            {
                a1=atoi(c1[0]);
                b1=atoi(c1[1]);
            }
            if(count==1)
            {
                a2=atoi(c1[0]);
                b2=atoi(c1[1]);
                if(a2>=a1)
                {
                    s1=a2-a1;
                }
                if(b1<=b2)
                {
                    s2=b1-b2;
                }
                if(b1>b2)
                {
                    s2=b1-b2;
                    s2=60-s2;
                    s1=s1-1;
                }
                if(s1==0&&s2<30)
                {
                    printf("0\n");
                }
            while(1)
            {
                while(1)
                {
                        if(total1<2)
                        {
                            coin=coin+30;
                            total2=total2+30;
                            if(total2==60)
                            {
                                total2=0;
                                total1=total1+1;
                            }
                            if((total1>s1)||(total1==s1&&total2>=s2))
                            {
                                if(total1>s1)
                                {
                                    coin=coin-30;
                                }
                                break;
                            }
                        }
                        else break;
                }
                if((total1-1==s1)||(total1==s1&&total2>=s2))
                {
                    break;
                }
                while(1)
                {
                        if(2<=total1&&total1<4)
                        {
                            coin=coin+40;
                            total2=total2+30;
                            if(total2==60)
                            {
                                total2=0;
                                total1=total1+1;
                            }
                            if((total1>s1)||(total1==s1&&total2>=s2))
                            {
                                if(total1>s1)
                                {
                                    coin=coin-40;
                                }
                                break;
                            }
                        }
                        else break;
                }
                if((total1-1==s1)||(total1==s1&&total2>=s2))
                {
                    break;
                }
                while(1)
                {
                        if(4<=total1&&total1<24)
                        {
                            coin=coin+60;
                            total2=total2+30;
                            if(total2==60)
                            {
                                total2=0;
                                total1=total1+1;
                            }
                            if((total1>s1)||(total1==s1&&total2>=s2))
                            {
                                if(total1>s1)
                                {
                                    coin=coin-60;
                                }
                                break;
                            }
                        }
                        else break;
                }
                if((total1-1==s1)||(total1==s1&&total2>=s2))
                {
                    break;
                }
            }
                printf("%d\n",coin);
            }
            count=1;
        }
        return 0;
}
