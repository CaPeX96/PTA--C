#include<stdio.h>
int main(){
    int n=6;
    if(scanf("%d",&n));
    int a[n];
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    int max=a[0];
    for(int i=0;i<n-1;i++)
    max=a[i+1]>a[i]?a[i+1]:a[i];
    printf("%d ",max);
    for(int i=0;i<n;i++){
        if(a[i]==max){
            printf("%d",i);break;
        }
    }
    return 0;
}