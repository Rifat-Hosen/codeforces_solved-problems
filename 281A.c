#include<stdio.h>
int main(){
    char word[1100];

    scanf("%s",word);
    if(word[0]>96)
        word[0]-=32;
    printf("%s\n",word);
    return 0;
}



