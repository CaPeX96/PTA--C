#include<stdio.h>
int main(){
    double x1,y1,x2,y2;
    scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
    printf("(%.1lf, %.1lf)",(x1+x2>-0.05&&x1+x2<0)?0.0:x1+x2,(y1+y2>-0.05&&y1+y2<0)?0.0:y1+y2);
    return 0;
}