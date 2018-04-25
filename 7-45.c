#include<stdio.h>
int isWan(int x){
    int sum=1,cnt=0,flag=0;
    int a[1000];
    for(int i=2;i<=x-1;i++){
        if(x%i==0){
            sum+=i;
            a[cnt++]=i;
        }
    }
    if(x==sum){
        printf("%d = 1",x);
        for(int i=0;i<cnt;i++){
            printf(" + %d",a[i]);
        }
        printf("\n");
        flag=1;
    }
    return flag;
}
int main(){
    int m=2,n=30,flag=0;
    scanf("%d%d",&m,&n);
    for(;m<=n;m++){
        flag+=isWan(m);
    }
    if(!flag)printf("None");
    return 0;
}