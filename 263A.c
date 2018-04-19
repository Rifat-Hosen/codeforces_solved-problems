#include<stdio.h>
int main(){
    int n=0,i,j,a,m=0;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            scanf("%d",&a);

            if(a){

                n=(i-3);
                if(n<0)
                    n*=-1;
                m=(j-3);
                if(m<0)
                    m*=-1;

                printf("%d\n",n+m);
                return 0;
            }
    }
    }
}
