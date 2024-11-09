#include<stdio.h>
#include<math.h>

int main(){

    int i,n;
    printf("n=");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        printf("%d %d\n",i, i*i );
    }
    return 0;
}
