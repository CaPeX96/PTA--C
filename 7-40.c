#include<stdio.h>
int main(){
    int n=3;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        float a,b;
        scanf("%f%f",&a,&b);
        float c=((a-100)*0.9-b/2)/(a-100)/0.9;
        if(c>-0.1&&c<0.1)printf("You are wan mei!\n");
        else if((a-100)*0.9-b/2>0)printf("You are tai shou le!\n");
        else if((a-100)*0.9-b/2<0)printf("You are tai pang le!\n");
    }
    return 0;
}