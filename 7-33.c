#include<stdio.h>
int isPrime(int x){
    int flag=1;
    if(x==1)flag=0;
    for(int i=2;i<x;i++){
        if(x%i==0){
            flag=0;break;
        }
    }
    return flag;
}
int main(){
    int M=2,N=5,sum=0,cnt=0;
    if(scanf("%d%d",&M,&N));
    for(int i=M;i<N+1;i++){
        if(isPrime(i)){
            cnt++;
            sum+=i;
        }
    }
    printf("%d %d",cnt,sum);
    return 0;
}