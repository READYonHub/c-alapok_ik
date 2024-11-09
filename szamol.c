#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){

    char s[50];
    int i, szam=0, betu=0, egyeb=0;
    fgets(s,50,stdin);
    for(i=0; i<strlen(s)-1;i++)
        if(isdigit(s[i]))
            szam++;
        else if (isalpha(s[i]))
            betu++;
        else
            egyeb++;
    printf("Szam = %d\nBetu = %d\nEgyeb = d\n",szam,betu,egyeb);


    return 0;
}
