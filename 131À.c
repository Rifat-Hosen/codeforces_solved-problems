#include<stdio.h>
int main()
{
    int length,i;
    char word[100];

    scanf("%s",word);
    if(word[0]>=97)
        word[0]=word[0]-32;

    length=strlen(word);

    for(i=1;i<length;i++)
    {
        if(word[i]<=92)
            word[i]=word[i]+32;

    }

    printf("%s\n",word);
    return 0;
}+
