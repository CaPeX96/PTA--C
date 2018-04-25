#include<stdio.h>
int main(){
    int n=5;
    char c;
    scanf("%d%c",&n,&c);
    char a[n][82];
    int len[n],k=0,max=0;
    for(int i=0;i<n;i++)
    {
        int cnt=0;
        while(~scanf("%c",&a[i][cnt++]))
        {
            if(a[i][cnt-1]=='\n')
            {
                a[i][--cnt]=0;
                len[k++]=cnt;
                break;
            }
        }
    }
    for(int i=0;i<k;i++)
    {
        if(len[i]>len[max])
        {
            max=i;
        }
    }
    printf("The longest is: %s",a[max]);
    return 0;
}