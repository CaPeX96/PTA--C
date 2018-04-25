#include <stdio.h>
int main() {
    int N;
    if(scanf("%d",&N));
    int sum=0,cnt=0;
    while(N>0){
        sum+=N%10;
        N/=10;
        cnt++;
    }
    printf("%d %d",cnt,sum);
    return 0;
}