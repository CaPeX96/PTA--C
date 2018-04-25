#include<stdio.h>
int main(){
    int n=1000,k=10;
    scanf("%d%d",&n,&k);
    int a[k],cnt=0,sum=0;
    for(int i=n;i>1;i--){
        int flag=1;
        for(int j=2;j<i-1;j++){
            if(i%j==0){
                flag=0;
                break;
            }
        }
        if(flag){
            a[cnt++]=i;
            sum+=i;
        }
        if(cnt>=k)break;
    }
    for(int i=0;i<cnt;i++){
        printf("%d",a[i]);
        printf("%c",i==cnt-1?'=':'+');
    }
    printf("%d",sum);
    return 0;
}