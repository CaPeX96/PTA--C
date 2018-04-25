#include<stdio.h>
int main(){
    int cnt=0,x=31,a=0,i=0;
    char s[1001];
    scanf("%d",&x);
    while(1){
        cnt++;
        a=a*10+1;
        if(i||a>=x){
            s[i++]='0'+a/x;
            a%=x;
            if(a==0){
                s[i]=0;
                printf("%s %d",s,cnt);
                break;
            }
        }
    }
    return 0;
}