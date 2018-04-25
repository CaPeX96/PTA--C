#include<stdio.h>
int main(){
    int n=4;
    if(scanf("%d",&n));
    int a[n];
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    printf("%d%c",a[n-i-1],i==n-1?0:' ');
    return 0;
}