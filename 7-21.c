#include<stdio.h>
int main()
{
    int V=75;
    if(scanf("%d",&V));
    printf("Speed: %d - ",V);
    if(V>60){
        printf("Speeding");
    }else{
        printf("OK");
    }
    return 0;
}