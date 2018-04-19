#include<stdio.h>
#include<string.h>
int main()
{

    int l,i,j,one=0,two=0,three=0;

    char word[110],swap;
    scanf("%s",&word);


    for(i=0;i<strlen(word);i=i+2){

    if(word[i]=='1')
        one++;
    else if(word[i]=='2')
        two++;
    else three++;
    }

    if(one){
        printf("1");
        one--;
    }
    else if(two){
        printf("2");
        two--;
    }
    else if(three){
        printf("3");
        three--;
    }

    while(one){
        printf("+1");
        one--;
    }
    while(two){
        printf("+2");
        two--;
    }
    while(three){
        printf("+3");
        three--;
    }

    printf("\n");


}

