#include<stdio.h>

int main()
{
  int a=0;
  scanf("%d",&a);
  int b=a/16*10+a%16;
  printf("%d",b);
  return 0;
}