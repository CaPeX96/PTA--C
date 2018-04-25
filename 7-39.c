#include<stdio.h>
int rabbit(int n){
    int x=n/90*270;
    if(n%90>80)x+=(n%90-80)*9+180;
    else if(n%90>50)x+=180;
    else if(n%90>40)x+=(n%90-40)*9+90;
    else if(n%90>10)x+=90;
    else x+=(n%90)*9;
    return x;
}
int main(){
    int t=242;
    scanf("%d",&t);
    if(rabbit(t)>t*3)printf("^_^ %d",rabbit(t));
    else if(rabbit(t)<t*3)printf("@_@ %d",t*3);
    else printf("-_- %d",t*3);
    return 0;
}