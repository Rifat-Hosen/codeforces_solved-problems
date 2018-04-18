#include <stdio.h>

int main()
{
    long long n,m,a;
    scanf("%I64d %I64d %I64d",&n,&m,&a);
    if(n%a==0) n=n/a;
    else n=(n/a)+1;

    if(m%a==0) m=m/a;
    else m=(m/a)+1;

    printf("%I64d\n",m*n);

    return 0;
}

/*

 #include<stdio.h>

int main(){
	long long int x,y,z;
	scanf("%lld %lld %lld",&x,&y,&z);
	printf("%lld",(x/z+((x%z)? 1: 0))*(y/z+((y%z)? 1: 0)));
	return 0;
}

*/
