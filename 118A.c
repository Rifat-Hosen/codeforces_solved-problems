#include<stdio.h>
int main()
{

    int i,j=0;

    char word[110],con[110];

    scanf("%s",word);

    for(i=0;word[i]!='\0';i++){

        if (word[i]=='a'||word[i]=='A'||word[i]=='E'||word[i]=='e'||word[i]=='i'||word[i]=='I'||word[i]=='o'||word[i]=='O'||word[i]=='u'||word[i]=='U'||word[i]=='y'||word[i]=='Y');

        else{
              if(word[i]>=65 && word[i]<=92)
	    {
		word[i]=word[i]+32;
	    }


            con[j]=word[i];
            j++;}

    }

    for(i=0;i<j;i++){

        printf(".%c",con[i]);
    }
    printf("\n");

    return 0;
}
