#include<stdio.h>
int min(int i,int j){

    if(i<j)
        i=j;
        printf("%d\n",j);
    return j;



}
int main(){
    int n,one=0,two=0,three=0,four=0,i,num,car=0;;
    scanf("%d",&n);
    for(i=0;i<n;i++){

        scanf("%d",&num);


        if(num==4)
            four++;
        else if(num==3)
            three++;
        else if (num==2)
            two++;
        else one++;

    }
    car+=four;
    car=car+min(one,three);
    four=0;


    printf("1=%d 2=%d 3=%d 4=%d\ncar=%d",one,two,three,four,car);



}




