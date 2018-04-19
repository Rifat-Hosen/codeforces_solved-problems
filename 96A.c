#include<stdio.h>
#include<string.h>
int main(){
    char word[110];
    int i,count=0;

    gets(word);
    for(i=0;i<strlen(word);i++){
        if(word[i]==word[i+1]){
            count++;
        }
        else count=0;
        if(count==6){
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");

    return 0;
}
