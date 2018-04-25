#include<stdio.h>
int main()
{
    int n=5,x=7;
    scanf("%d%d",&n,&x);
    int a[n]/*={0,5,7,1,9}*/;
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int flag=1;
    for(int i=0;i<n;i++)
    {
        if(a[i]==x){
            flag=0;
            printf("%d",i);
            break;
        }
    }
    if(flag)
    printf("Not Found");
    return 0;
}