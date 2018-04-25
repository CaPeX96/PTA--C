#include<stdio.h>
int main(){
    int n=4,raw_max,column_min;
    if(scanf("%d",&n));
    int a[n][n]/*={1,7,4,1,4,8,3,6,1,6,1,2,0,7,8,9}*/;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(scanf("%d",&a[i][j]));
        }
    }
    int a_max[n],a_min[n];
    for(int i=0;i<n;i++){
        a_max[i]=0;a_min[i]=0;
        for(int j=1;j<n;j++){
            if(a[i][a_max[i]]<=a[i][j])
            a_max[i]=j;
            if(a[a_min[i]][i]>=a[j][i])
            a_min[i]=j;
        }
        
    }
    int flag=1;
    for(int i=0;i<n;i++)
    if(a_min[a_max[i]]==i){
        printf("%d %d",i,a_max[i]);
        flag=0;
    }
    if(flag)printf("NONE");
    return 0;
}