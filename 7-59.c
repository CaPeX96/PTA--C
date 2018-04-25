#include<stdio.h>
int main(){
    int cnt=0;
    char a[82];
    while(~scanf("%c",&a[cnt++]))
    {
        if(a[cnt-1]=='\n')
        {
            a[cnt]=0;
            break;
        }
    }
    for(int i=cnt-2;i>=0;i--)
    {
        printf("%c",a[i]);
    }
    return 0;
}