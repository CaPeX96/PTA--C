#include<stdio.h>
int main(){
    int n=6,m=0;
    scanf("%d%d",&n,&m);
    int a[n];
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    m%=n;
    if(m==0)
    for(int i=0;i<n;i++)printf("%d%c",a[i],i==n-1?0:' ');
    else{
        for(int i=n-m;i<n;i++)printf("%d ",a[i]);
        for(int i=0;i<n-m;i++)printf("%d%c",a[i],i==n-m-1?0:' ');
    }
    return 0;
}