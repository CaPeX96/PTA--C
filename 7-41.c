#include<stdio.h>
int main(){
    int n=3;
    scanf("%d",&n);
    int s=0;
    for(int i=1;i<n+1;i++){
        int add=1;
        for(int j=1;j<i+1;j++){
            add*=j;
        }
        s+=add;
    }
    printf("%d",s);
    return 0;
}