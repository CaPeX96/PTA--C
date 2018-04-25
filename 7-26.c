#include <stdio.h>
int main() {
    int x,y;
    if(scanf("%d%d",&x,&y));
    int a=x,b=y,t;
    while(b!=0){
        t=b;b=a%b;a=t;
    }
    printf("%d %d",a,x*y/a);
    return 0;
}