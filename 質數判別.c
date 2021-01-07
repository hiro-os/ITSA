#include <stdio.h>
int main()
{
  int i;
  int number;
  int flag = 0;
  scanf("%d", &number);
  for( i=2;i<number;++i ) 
  {
    if( number%i==0 ) 
    {
      flag = 1;
      break;
    }
  }
  if( flag==0 )
    printf("YES\n");
  else
    printf("NO\n");
  return 0;
}

