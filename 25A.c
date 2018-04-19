#include<stdio.h>

int main(){
     int n,i,num[110],ee=0,oo=0,even[110],odd[110],e=0,o=0;
     scanf("%d",&n);

     for(i=0;i<n;i++){
        scanf("%d",&num[i]);
        if(num[i]%2==0){
            even[ee]=i+1;
            e++;
            ee++;
        }
        else{
            odd[oo]=i+1;
            o++;
            oo++;
        }
     }

     if(ee==1)
        printf("%d\n",even[0]);
     else printf("%d\n",odd[0]);




    return 0;
}
