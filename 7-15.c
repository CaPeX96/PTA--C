#include<stdio.h>

int main()
{
  double cm=0.0;
  scanf("%lf",&cm);
  float a = cm/100/0.3048;
  int b=a;
  int c=(a-b)*12;
  printf("%d %d",b,c);
  return 0;
}