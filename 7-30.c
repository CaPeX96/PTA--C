#include<stdio.h>
int main(){
    int x=-636,cnt=1;
    if(scanf("%d",&x));
    if(x<0){
        x=-x;
        printf("fu ");
    }
    int y=x;
    if(x==0)printf("ling");
    while(y!=0){
        y/=10;cnt*=10;
    }
    cnt/=10;
    while(cnt>0){
        switch(x/cnt){
            case 0:printf("ling");break;
            case 1:printf("yi");break;
            case 2:printf("er");break;
            case 3:printf("san");break;
            case 4:printf("si");break;
            case 5:printf("wu");break;
            case 6:printf("liu");break;
            case 7:printf("qi");break;
            case 8:printf("ba");break;
            case 9:printf("jiu");break;
            default:break;
        }
        x%=cnt;
        cnt/=10;
        if(cnt>0)
        printf(" ");
    }
    return 0;
}