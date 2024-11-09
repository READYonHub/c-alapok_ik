#include<stdio.h>
#include<math.h>

int main(){
    int a, b, c;
    float p, T;

    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    printf("c=");
    scanf("%d", &c);

    if(a + b > c && a + c > b && b + c > a){
        printf("Szerkeszthető\n");
        p = (a + b + c) / 2.0;
        T = sqrt(p * (p - a) * (p - b) * (p - c));
        printf("T=%.2f\n", T);
    } else {
        printf("Nem szerkeszthető\n");
    }

    return 0;
}
