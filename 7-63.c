#include<stdio.h>
int main(){
    int n=1;char c;
    scanf("%d%c",&n,&c);
    char a[n][19];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<19;j++)
        {
            scanf("%c",&a[i][j]);
        }
        a[i][18]=0;
    }
    // printf("%s",a[0]);
    int b[18]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2},flag=1;
    char x[11]={'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<17;j++)
        {
            // printf("%d %d %d \n",b[j],a[i][j]-'0',sum);
            if(a[i][j]!='X'){
                sum+=b[j]*(a[i][j]-'0');
            }else{
                sum+=b[j]*10;
            }
            // printf("%d %d %d \n",b[j],a[i][j]-'0',sum);
        }
        sum%=11;
        
        if(x[sum%11]!=a[i][17])
        {
            printf("%s\n",a[i]);
            flag=0;
        }
    }
    if(flag)
    {
        printf("All passed");
    }
    return 0;
}
