#include<stdio.h>
int main(){
    float h,m,angle;
    char c;

     while(scanf("%f:%f",&h,&m))
    {
        if(h==0 && m==0)
            break;

     angle=(11*m-60*h)/2;
     if(angle<0)
        angle*=-1;
     if(angle>180)
            angle=360-angle;
    printf("%.3f\n",angle);
    }
     return 0;
}
