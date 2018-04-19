#include<stdio.h>
#include<string.h>
int main(){
    char word[110],word2[110];
    gets(word);
    gets(word2);
    strrev(word2);
    if (strcmp(word2,word) == 0)
        printf("YES\n");
    else printf("NO\n");

    return 0;
}
