#include<stdio.h>
int main()
{
    int minute=4;
    float mile=5.1,price=0.0;
    if(scanf("%f %d",&mile,&minute));
    price+=minute/5*2;
    if(mile>10){
        price+=10+14+(mile-10)*3;
    }else if(mile>3){
        price+=10+(mile-3)*2;
    }else{
        price+=10;
    }
    printf("%d",(int)(price+0.5));
    return 0;
}