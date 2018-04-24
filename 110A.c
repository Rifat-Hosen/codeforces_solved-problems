#include<stdio.h>
#include<string.h>
int main(){
    int i,l,count=0;
    char str[50];

    scanf("%s",str);
    l=strlen(str);

    for(i=0;i<l;i++){
        if(str[i]=='4'||str[i]=='7')
            count++;
    }

    if(count==7||count==4)
        printf("YES\n");
    else printf("NO\n");


    return 0;
}

