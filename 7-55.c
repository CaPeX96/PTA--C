#include<stdio.h>
int main(){
    int n=3;
    if(scanf("%d",&n));
    int a[n][n],sum=0;
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++){
        scanf("%d",&a[i][j]);
        sum+=a[i][j];
    }
    for(int i=0;i<n;i++){
        sum-=a[n-1][i];
        sum-=a[i][n-1];
        sum-=a[n-1-i][i];
    }
    sum+=a[n-1][0]+a[0][n-1]+a[n-1][n-1];
    printf("%d",sum);
    return 0;
}