#include <stdio.h>
int main() {
    int x,sum=0;
    while(~scanf("%d",&x)){
        if(x<=0)break;
        if(x%2==1)sum+=x;
    }
    printf("%d\n",sum);
    return 0;
}