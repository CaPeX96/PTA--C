#include<stdio.h>
int main(){
    int n=5;
    char c;
    scanf("%d",&n);
    char no[n][7];
    char name[n][12];
    int grade[10]={0},cnt=0;
    if(scanf("%c",&c));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<7;j++)
        {
            scanf("%c",&no[i][j]);
            if(no[i][j]==' '){
                no[i][j]=0;break;
            }
        }
        for(int j=0;j<12;j++)
        {
            scanf("%c",&name[i][j]);
            if(name[i][j]==' '){
                name[i][j]=0;break;
            }
        }
        for(int j=0;j<3;j++)
        {
            int t;
            scanf("%d",&t);
            grade[i]+=t;
        }
        if(scanf("%c",&c));
    }
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(grade[i]>grade[max]){
            max=i;
        }
    }
    printf("%s %s %d",name[max],no[max],grade[max]);
    return 0;
}