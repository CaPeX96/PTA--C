#include<stdio.h>
int main()
{
    int x=0;
    scanf("%d",&x);
    // x=-98;
    if(x>0){
        printf("sign(%d) = 1",x);
    }else if(x==0){
        printf("sign(%d) = 0",x);
    }else{
        printf("sign(%d) = -1",x);
    }
    return 0;
}