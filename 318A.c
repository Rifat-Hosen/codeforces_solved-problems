#include<stdio.h>
int main(){
    long long int n,k;

    scanf("%I64d %I64D",&n,&k);

    if(n%2==0){

    if(k<=(n/2)){
        printf("%I64d\n",(2*k)-1);
    }
    else printf("%I64d\n",(k-(n/2))*2);
    }
        else{

            if(k<=(n/2)+1)
                printf("%I64d\n",(k*2)-1);
             else printf("%I64d\n",(k-(n/2)-1)*2);
        }
    return 0;
}
