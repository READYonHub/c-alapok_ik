#include<stdio.h>
int main(){

    int pont;
    scanf("%d",&pont);
    if(pont>=80){
        printf("jeles\n");
    }
    else if(pont>=70){
        printf("jó\n");
    }
    else if(pont>=60){
        printf("elégséges\n");
    }
    else if(pont>=50){
        printf("elégséges\n");
    }
    else if(pont>=40){
        printf("elégtelen\n");
    }

  return 0;
}
