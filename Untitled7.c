#include<stdio.h>
#include<math.h>

int main(){

  /*  int i,n, ossz=0, szor=1;
    printf("n=");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        //printf("%d %d\n",i, i*i );
        ossz=ossz+i;
        szor=szor*i;
    }
    printf("Osszeg= %d\nSzorzat=%d\n,",ossz,szor);*/

    int n;
    printf("n=");
    scanf("%d",&n);
    while(n!=0){
        if(n%2==0){
            printf("Páros");
        }
        else if(!(n%2==0)){
                printf("Páratlan");
        }
        else{
            printf("A szám 0");
        }
         scanf("%d",&n);
    }


    return 0;
}
