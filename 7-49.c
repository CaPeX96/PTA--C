#include<stdio.h>
int main()
{
    char a[22],b[21];
    int cnt=0,digit[10]={0},_digit[10]={0};
    scanf("%c",&a[cnt++]);
    while(a[cnt-1]!='\n'){
        scanf("%c",&a[cnt++]);
    }
    a[cnt-1]=0;
    int overflow=0;
    for(int i=cnt-2;i>=0;i--){
        int add=(a[i]-'0')*2;
        if(add>=10){
            add-=10;
            b[i]=add+overflow+'0';
            overflow=1;
        }else{
            b[i]=add+overflow+'0';
            overflow=0;
        }
    }
    b[cnt-1]=0;
    for(int i=0;i<cnt-1;i++){
        switch(a[i]){
            case '0':digit[0]++;break;
            case '1':digit[1]++;break;
            case '2':digit[2]++;break;
            case '3':digit[3]++;break;
            case '4':digit[4]++;break;
            case '5':digit[5]++;break;
            case '6':digit[6]++;break;
            case '7':digit[7]++;break;
            case '8':digit[8]++;break;
            case '9':digit[9]++;break;
            default:break;
        }
    }
    for(int i=0;i<cnt-1;i++){
        switch(b[i]){
            case '0':_digit[0]++;break;
            case '1':_digit[1]++;break;
            case '2':_digit[2]++;break;
            case '3':_digit[3]++;break;
            case '4':_digit[4]++;break;
            case '5':_digit[5]++;break;
            case '6':_digit[6]++;break;
            case '7':_digit[7]++;break;
            case '8':_digit[8]++;break;
            case '9':_digit[9]++;break;
            default:break;
        }
    }
    int flag=1;
    for(int i=0;i<10;i++){
        if(digit[i]!=_digit[i]){
            flag=0;
            break;
        }
    }
    if(flag)printf("Yes\n");
    else printf("No\n");
    if(overflow)printf("1");
    printf("%s",b);
    return 0;
}