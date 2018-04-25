#include<stdio.h>
int main()
{
    int n=12,u=3,d=1,m=0,ans=0;
    scanf("%d%d%d",&n,&u,&d);
    ans+=u;m++;
    while(ans<n){
        ans-=d;m++;
        ans+=u;m++;
    }
    printf("%d\n",m);
    return 0;
}