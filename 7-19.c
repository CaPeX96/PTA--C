#include<stdio.h>
int main()
{
    int year=2000,month=3,day=2;
    if(scanf("%d/%d/%d",&year,&month,&day));
    int two_month=28;
    if(year%4==0){
        if(year%100!=0){
            two_month=29;
        }
    } 
    if(year%400==0){
        two_month=29;
    }
    switch(month){
        case 1:printf("%d",day);break;
        case 2:printf("%d",(day+31));break;
        case 3:printf("%d",(day+31+two_month));break;
        case 4:printf("%d",(day+62+two_month));break;
        case 5:printf("%d",(day+92+two_month));break;
        case 6:printf("%d",(day+123+two_month));break;
        case 7:printf("%d",(day+153+two_month));break;
        case 8:printf("%d",(day+184+two_month));break;
        case 9:printf("%d",(day+215+two_month));break;
        case 10:printf("%d",(day+245+two_month));break;
        case 11:printf("%d",(day+276+two_month));break;
        case 12:printf("%d",(day+306+two_month));break;
        default:break;
    }
    return 0;
}