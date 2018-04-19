#include<stdio.h>
#include<string.h>
int main()
{
    int zero=0,one=0,n,i,rem;
    char str[1000000];
    scanf("%d %s",&n,str);
    for(i=0;i<n;i++){
        if(str[i]=='0')
            zero++;
        else one++;
    }
    if(one<=zero)
        rem=2*one;
    else rem=2*zero;
    printf("%d\n",n-rem);
    return 0;
}
