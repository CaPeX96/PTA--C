#include<stdio.h>
int main(){
    int randint,N,x=0,cnt=0,flag=0;
    if(scanf("%d%d",&randint,&N));
    while(!flag){
        if(scanf("%d",&x))cnt++;
        if(x<0&&cnt<=N)flag=printf("Game Over");
        else if(cnt>N)flag=printf("Game Over");
        else if(x==randint){
            if(cnt==1)flag=printf("Bingo!");
            else if(cnt<=3)flag=printf("Lucky You!");
            else if(cnt>3)flag=printf("Good Guess!");
        }else if(x>randint)printf("Too big\n");
        else if(x<randint)printf("Too small\n");
    }
    return 0;
}