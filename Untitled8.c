#include<stdio.h>


int main(){


    int n = 10;
    int a[n];
    int i, szum=0, paros=0, min=0;

     for(i=0;i<n;i++){
        a[i] = rand() % 99 + 1;
        srand(time(NULL));
        szum=szum+a[i];
        if(a[i]%2==0){
            paros++;
        }
        if(a[i]<a[min]){
            min=i;
        }
        for(i=0;i<n;i++){
            printf("%d ",a[i]);
        }
        printf("szum %d\n",szum);
        printf("Páros %d\n",paros);
        printf("legkisebb értéke %d\n",a[min]);
        printf("legkisebb helye %d\n",min);
     }


return 0;
}
