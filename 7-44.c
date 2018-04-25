#include<stdio.h>

int main(){
    const int len = 3;
    int x=123,a[len];
    scanf("%d",&x);
    int s=0;
    if(x==495)printf("1: 954 - 459 = 495");
    while(x!=495){
        int cnt=0;
        while(x>0){
            a[cnt++]=x%10;
            x/=10;
        }
        for(int i=0;i<len-1;i++){
            for(int j=0;j<len-1-i;j++){
                if(a[j]>a[j+1]){
                    int t=a[j];
                    a[j]=a[j+1];
                    a[j+1]=t;
                }
            }
        }
        int max=a[2]*100+a[1]*10+a[0];
        int min=a[2]+a[1]*10+a[0]*100;
        x=max-min;
        printf("%d: %d - %d = %d\n",++s,max,min,x);
    }
    return 0;
}