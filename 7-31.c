#include<stdio.h>
int main(){
    int x=5,cnt=0;
    if(scanf("%d",&x));
    int sum=0;
    while(1){
        int y=x;
        cnt++;int sum=0;
        while(y>0){
            sum+=y%10;
            y/=10;
        }
        sum=sum*3+1;
        printf("%d:%d\n",cnt,sum);
        if(x==sum)break;
        x=sum;
    }
    return 0;
}