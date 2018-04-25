#include<stdio.h>
int main(){
    char a[42]={'('};
    int k=1,cnt=1;
    while(~scanf("%c",&a[cnt++]))
    {
        if(a[cnt-1]=='\n')
        {
            a[--cnt]=0;
            break;
        }
    }
    while(a[k])
    {
        printf("%c",a[k++]);
        if(a[k-1]=='*'||a[k-1]=='/'||a[k-1]=='('||a[k-1]==')')
        {
            printf("\n");
        }
        else if(a[k]=='*'||a[k]=='/'||a[k]=='('||a[k]==')'||a[k]=='+'||a[k]=='-')
        {
            printf("\n");
        }
        else if(a[k-1]=='+'&&a[k-2]!='(')
        {
            printf("\n");
        }
        else if(a[k-1]=='-'&&a[k-2]!='(')
        {
            printf("\n");
        }
    }
    
    return 0;
}