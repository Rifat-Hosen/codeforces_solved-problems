
#include<stdio.h>
int main()
{
    char c[101],ch;
    int n,a=0,i=0,step=0,j=1;
    scanf("%d %s",&n,c);
    ch=c[0];
    while(a<n){
    if(c[i]==c[j]){
        step++;
        i++;
        j++;
    }
    else{
        step++;
        i+=2;
        j+=2;
    }
    a++;

    }
    printf("%d\n",step);


    return 0;

}
