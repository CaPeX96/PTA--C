#include<stdio.h>
int main()
{
    long long x=256;
    long long t=1;
    int cnt=0;
    scanf("%d",&x);
    while(t<=x){
        cnt++;
        t*=2;
    }
    printf("%d\n",32-cnt);
    return 0;
}