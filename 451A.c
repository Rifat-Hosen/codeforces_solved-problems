#include<stdio.h>
int main(){
    int m,n;
    scanf("%d %d",&m,&n);

    if(m>n)
        m=n;
    if(m%2==0) printf("Malvika\n");
        else printf("Akshat\n");
    return 0;
}

