#include<stdio.h>
void print(int x){
    if(x==54){
        printf("J2");
    }else if(x==53){
        printf("J1");
    }else{
        x--;
        switch(x/13){
            case 0:printf("S%d",x%13+1);break;
            case 1:printf("H%d",x%13+1);break;
            case 2:printf("C%d",x%13+1);break;
            case 3:printf("D%d",x%13+1);break;
            default:break;
        }
    }
}

int main(){
    int order[54],order_2[54]={0};
    for(int i=0;i<54;i++)
    {
        order[i]=i+1;
    }
    int n,a[54]={36, 52, 37, 38, 3, 39, 40, 53, 54, 41, 11, 12, 13, 42, 43, 44, 2, 4, 23, 24, 25, 26, 27, 6, 7, 8, 48, 49, 50, 51, 9, 10, 14, 15, 16, 5, 17, 18, 19, 1, 20, 21, 22, 28, 29, 30, 31, 32, 33, 34, 35, 45, 46, 47};
    scanf("%d",&n);
    for(int i=0;i<54;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<54;j++){
            // printf("here\n");
            order_2[a[j]-1]=order[j];
            // printf("%d %d\n",a[j],order_2[a[j]-1]);
        }
        for(int k=0;k<54;k++){
            // printf("here1\n");
            order[k]=order_2[k];
        }
    }
    for(int i=0;i<54;i++){
        // printf("here2\n");
        print(order[i]);
        if(i!=53)
        printf(" ");
    }
    
    return 0;
}