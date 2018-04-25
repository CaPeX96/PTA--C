#include<stdio.h>
int main(){
    int y,f,n=98,flag=0;
    scanf("%d",&n);
    for(y=0;y<101;y++){
        if((199*y+n)%98==0&&(199*y+n)/98<100){
            printf("%d.%d",y,(199*y+n)/98);
            flag=1;
            break;
        }
    }
    if(!flag)printf("No Solution");
    return 0;
}