#include <stdio.h>

int main()
{
    int n,rem,k,i=1,p=5;
    scanf("%d %d",&n,&k);
    rem=240-k;
    while(p<=rem){
        i++;
        p+=i*5;
        printf("%d   %d\n",rem,p);
    }
    if(i>n)
        i=n;

    printf("%d\n",i-1);
    return 0;
}


