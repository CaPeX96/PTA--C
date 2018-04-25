#include<stdio.h>
double fact(int x){
    double ans=1;
    for(int i=1;i<=x;i++){
        ans*=i;
    }
    return ans;
}
int main()
{
    int m=2,n=7;
    double result;
    scanf("%d%d",&m,&n);
    result=fact(n)/fact(m)/fact(n-m);
    printf("result = %.0f\n",result);
    return 0;
}