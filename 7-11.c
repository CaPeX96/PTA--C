#include<stdio.h>
int main()
{
    int grade=90;
    scanf("%d",&grade);
    if(grade>=90){
        printf("A");
    }else if(grade>=80){
        printf("B");
    }else if(grade>=70){
        printf("C");
    }else if(grade>=60){
        printf("D");
    }else{
        printf("E");
    }
    
    return 0;
}