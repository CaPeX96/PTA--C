#include<stdio.h>
float a_3=3,a_2=-1,a_1=-3,a_0=1;
float a=-0.5,b=0.5;
float cal(float x){
    return a_3*x*x*x+a_2*x*x+a_1*x+a_0;
}
int main(){
    const float threshold = 1e-10;
    scanf("%f%f%f%f%f%f",&a_3,&a_2,&a_1,&a_0,&a,&b);
    while((b-a)>=threshold){
        // printf("here1");
        if((b-a)<threshold&&(b-a)>-threshold)
        {   
            printf("%.2f",(a+b)/2);
            // printf("here2");
            break;
        }
        else if(cal(a)*cal(b)<=0)
        {
            if(cal((a+b)/2)<threshold&&cal((a+b)/2)>-threshold)
            {
                printf("%.2f",(a+b)/2);
                // printf("here3");
                break;
            }
            else{
                if(cal((a+b)/2)*cal(a)>0)
                a=(a+b)/2;
                else 
                b=(a+b)/2;
            }
        }
    }
    return 0;
}