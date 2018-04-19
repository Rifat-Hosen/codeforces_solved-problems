#include<stdio.h>
int main(){
    int n,i,a,b,c,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d %d",&a,&b,&c);

            if(a==b&&a==1)
            count++;
            else if(b==c&&b==1)
                count++;
            else if(a==c&&a==1)
                count++;
    }
    printf("%d\n",count);
    return 0;
}
