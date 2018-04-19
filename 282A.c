#include<stdio.h>
int main(){

    int n,poss=0,neg=0,i;
    char word[10];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",&word);
        if(word[0]=='+'||word[2]=='+')
        poss++;
        else neg++;
    }


    printf("%d\n",poss-neg);
     return 0;
}
