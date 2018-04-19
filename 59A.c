#include<stdio.h>
#include<string.h>

int main(){
    int n,i,j,low=0,up=0;
    char word[110];
    scanf("%s",word);

    for(i=0;i<strlen(word);i++){
        if(word[i]>95)
            low++;
        else up++;
    }
    if(up>low)
        printf("%s\n",strupr(word));
    else printf("%s\n",strlwr(word));
    return 0;
}

