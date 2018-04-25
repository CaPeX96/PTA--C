#include<stdio.h>
int main()
{
    int n=10;
    scanf("%d",&n);
    int b[1000]={0},a[n]/*={3,2,-1,4,3,4,3,0,3,2}*/;
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(a[j]==a[i])
            {
                b[j]+=1;
                break;
            }
        }
    }
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(b[i]>=b[max])
        {
            max=i;
        }
    }
    printf("%d %d",a[max],b[max]+1);
    return 0;
}