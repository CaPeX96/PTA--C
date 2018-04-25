#include<stdio.h>
int main(){
    int N=5;
    float sum=0.0,sign=1.0;
    if(scanf("%d",&N));
    for(int i=1;i<N+1;i++){
        sum+=sign*i/(2*i-1);
        sign=-sign;
    }
    printf("%.3f",sum);
    return 0;
}