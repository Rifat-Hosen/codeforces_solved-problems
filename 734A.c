#include<stdio.h>
#include<string.h>

int main(){
    int n,i,j,an=0,dn=0;
    char word[1000000];
    scanf("%d",&j);
    scanf("%s",word);

    for(i=0;i<strlen(word);i++){
        if(word[i]=='A')
            an++;
        else dn++;
    }
    if(an>dn)
        printf("Anton\n");
    else if(dn>an) printf("Danik\n");
    else printf("Friendship\n");
    return 0;
}
