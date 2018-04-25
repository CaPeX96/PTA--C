#include<stdio.h>
double dict(int n,int i){
    double sum=1;
    for(int k=1;k<=n;k=k+i){
        sum*=k;
    }
    return sum;
}
int main(){
    double PI=0,eps=1e-5,cnt=0,add=1;
    scanf("%le",&eps);
    do{
        add=dict(cnt,1)/dict(cnt*2+1,2);
        cnt++;
        PI+=add;
    }while(add>=eps);
    printf("PI = %.5f",PI*2);
    return 0;
}