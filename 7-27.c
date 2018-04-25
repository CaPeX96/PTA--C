#include <stdio.h>
int main() {
    int N;
    if(scanf("%d",&N));
    int a=1,b=1,cnt=2;
    while(b<N){
        cnt++;
        int t=a+b;
        a=b;
        b=t;
    }
    if(N==1)printf("1");
    else printf("%d",cnt);
    return 0;
}