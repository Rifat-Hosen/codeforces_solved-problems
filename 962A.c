#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    long int prob[n],sum=0,sum2=0;
    for(i=0;i<n;i++){
        scanf("%ld",&prob[i]);
        sum=sum+prob[i];
    }
    if(sum%2!=0)
        sum=(sum/2)+1;
    else sum=sum/2;
    for(i=0;i<n;i++){
        sum2=sum2+prob[i];
        if(sum2>=sum)
        {
            printf("%ld\n",i+1);
            return 0;
        }
    }
    return 0;
}

