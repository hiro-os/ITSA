#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    switch(x)
    {
        case 1:
            printf("Person\n");
        break;
        case 2:
            printf("Fairy\n");
        break;
        case 3:
            printf("Dwarf\n");
        break;
    }
    return 0;
}
