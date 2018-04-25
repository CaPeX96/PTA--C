#include<stdio.h>
int main()
{
  int d;
  scanf("%d",&d);
  int p=d==5?7:(d+2)%7;
  printf("%d",p);
  return 0;
}