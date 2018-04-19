#include<stdio.h>
int main(){
    int n,x1,y1,x[110],y[110],i,j=0,m=0;
    scanf("%d",&n);
    scanf("%d",&x1);
    for(i=0;i<x1;i++)
        scanf("%d",&x[i]);
    scanf("%d",&y1);
    for(i=0;i<y1;i++){
        scanf("%d",&y[i]);
    }
    for(i=0;i<y1;i++){

        for(j=0;j<x1;j++){
            if(y[i]==x[j])
                m++;
        }
    }
    m=y1-m;

    if(x1+m==n)
        printf("I become the guy.\n");
    else printf("Oh, my keyboard!\n");

    return 0;
}


