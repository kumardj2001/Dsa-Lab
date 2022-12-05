#include<stdio.h>
int main()
{
  int i=1;
  while(i<=32767)
  {
      printf("%d\n");
      i=i++;
  }

  return 0;
}