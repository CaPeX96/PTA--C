#include<stdio.h>
int main()
{
    char ch;
    int a=0,b=0;
    if(scanf("%d",&a));
    if(scanf("%c",&ch));
    while(ch!='='){
        if(scanf("%d",&b));
        switch(ch){
            case '+':a+=b;break;
            case '-':a-=b;break;
            case '*':a*=b;break;
            case '/':
            if(b==0){
                printf("ERROR");
                goto err;
                }a/=b;break;
            default:printf("ERROR");goto err;
        }
        if(scanf("%c",&ch));
    }
    printf("%d",a);
    err:
    return 0;
}