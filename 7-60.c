#include<stdio.h>
int main(){
    char a[82];
    int cnt=0;
    while(~scanf("%c",&a[cnt++]))
    {
        if(a[cnt-1]=='\n')
        {
            a[--cnt]=0;
            break;
        }
    }
    int b[256]={0};
    for(int i=0;i<cnt;i++)
    {
        b[a[i]]=1;
    }
    for(int i=0;i<256;i++)
    {
        if(b[i]==1)
        {
            printf("%c",i);
        }
    }
    return 0;
}