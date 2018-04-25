#include<stdio.h>
int main(){
    int x=123456;
    long long mask=1;
    scanf("%d",&x);
    if(x==0){
        printf("0 ");
        return 0;
    }
    int y=x;
    while(y>0){
        y/=10;mask*=10;
    }
    mask/=10;
    while(mask>0){
        printf("%d ",x/mask);
        x%=mask;
        mask/=10;
    }
    return 0;
    
}