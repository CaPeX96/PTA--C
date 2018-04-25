#include<stdio.h>
int main(){
    char a[1002]={1};
    int cnt=1,max=1,k;
    while(~scanf("%c",&a[cnt++]))
    {
        if(a[cnt-1]=='\n')
        {
            a[--cnt]=0;
            break;
        }
    }
    for(int i=1;i<cnt-1;i++)
    {
        if(a[i]==a[i+1])
        {
            int l=i,j=i+1;k=0;
            while(a[l--]==a[j++])
            {
                k+=2;
            }
            if(k>max)max=k;
        }else if(a[i-1]==a[i+1])
        {
            int left=i-1,right=i+1;k=1;
            while(a[left--]==a[right++])
            {
                k+=2;
            }
            if(k>max)max=k;
        }
        
    }
    printf("%d\n",max);
    return 0;
}