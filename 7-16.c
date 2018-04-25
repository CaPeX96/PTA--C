#include<stdio.h>

int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  int hour=a/100;
  int min=a%100;
  int total=hour*60+min+b;
  hour=total/60;
  min=total%60;
  printf("%d",hour*100+min);
  return 0;
}