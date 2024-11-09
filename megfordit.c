#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){

    char s[50], c;
    int i, j;
    fgets(s, 50, stdin); // Biztonságosabb olvasás

    // Eltávolítja a sorvégi jelet, ha van
    s[strcspn(s, "\n")] = '\0';

    for(i=0, j=strlen(s)-1; i<j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
    puts(s);

    return 0;
}
