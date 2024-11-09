#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){

    /*
    char s[50];
    scanf("%s", s); // Első szóközig olvas
    printf("%s", s);

    gets(s); // Enterig olvas
    printf("%s", s);

    fgets(s, 50, stdin); // Enterig olvas, de benne lesz a sorvégi jel a végén '\n'
    printf("%s", s);
    */

    char s[50];
    int i;

    fgets(s, 50, stdin);
    for(i = 0; i < strlen(s); i++) {
        if(isspace(s[i])) {
            s[i] = tolower(s[i]);
        }
        else if(islower(s[i])) {
            s[i] = toupper(s[i]);
        }
    }
    printf("%s", s);
    return 0;
}
