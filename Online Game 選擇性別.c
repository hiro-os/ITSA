#include<stdio.h>
int main()
{
    char x[100];
    scanf("%c",x);
    switch(x[0])
    {
        case 'E':
            printf("ByeBye\n");
        break;
        case 'M':
            printf("Male\n");
        break;
        case 'F':
            printf("Female\n");
        break;
    }
    return 0;
}

