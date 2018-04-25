#include<stdio.h>
int main(){
    int N=1000;
    double sum=0.0,a=1.0,b=2.0;
    if(scanf("%d",&N));
    for(int i=0;i<N;i++){
        sum+=b/a;
        double t=a+b;
        a=b;
        b=t;
    }
    printf("%.2f",sum);
    return 0;
}