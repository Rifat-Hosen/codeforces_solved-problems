#include<stdio.h>
int main(){
    int a,b,c,x[6],i,j,swap;
    scanf("%d %d %d",&a,&b,&c);
    x[0]=a+b*c;
    x[1]=a*(b+c);
    x[2]=a*b*c;
    x[3]=(a+b)*c;
    x[4]=a+b+c;

    for(i=0;i<5;i++){
    for(j=i+1;j<5;j++){

        if(x[i]>x[j]){
            swap=x[i];
            x[i]=x[j];
            x[j]=swap;
        }
    }
    }

    printf("%d",x[4]);
    return 0;
}
