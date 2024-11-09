#include<stdio.h>
#include<math.h>

int main(){

    int a,b;    //5, 6,
    char op;    //a, d, n,

    scanf("%d %c %d", &a,&op,&b);

    switch(op)
    {
    case '+':
        printf("%d+%d=%d\n",a,b,a+b);break;
    case '-':
        printf("%d-%d=%d\n",a,b,a-b);break;
    case '*':
        printf("%d*%d=%d\n",a,b,a*b);break;
    case '/':
        if(b==0)
            {printf("0-val való osztás");break;}
        else
            {printf("%d/%d=%.2f\n",a,b,(float)a/b);break;}
    default: printf("Hibás operátor\n");
    }

    return 0;
}
