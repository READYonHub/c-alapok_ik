#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void kiir(int a[], int n) {
    int i;
    for(i=0; i<n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int min_ertek(int a[], int n) {
    int min = a[0], i;
    for(i=1; i<n; i++) {
        if(a[i] < min) {
            min = a[i];
        }
    }
    return min;
}

int mini_index(int a[], int n) {
    int mini = 0, i;
    for(i=1; i<n; i++) {
        if(a[i] < a[mini]) {
            mini = i;
        }
    }
    return mini;
}

int paros(int a[], int n){
    int paros=0, i;
    for(i=0; i<n; i++){
        if(a[i] % 2 == 0){
            paros++;
        }
    }
    return paros;
}

void csere(int a[], int i, int j) {
    int tmp;
    tmp = a[i];
    a[i] = a[j];
    a[j] = tmp;
}

void minkivalaszt(int a[], int n) {
    int i, j, min;
    for(i=0; i<n-1; i++) {
        min = i;
        for(j=i+1; j<n; j++) {
            if(a[j] < a[min]) {
                min = j;
            }
        }
        csere(a, i, min);
    }
}

void buborekos(int a[], int n){
    int i, j;
    for(i=n-1; i>0; i--){
        for(j=0; j<i; j++){
            if(a[j] > a[j+1]){
                csere(a, j, j+1);
            }
        }
    }
}

void beszurasos(int a[], int n){
    int i, j, kulcs;
    for(i=1; i<n; i++){
        kulcs = a[i];
        for(j=i-1; j>=0 && a[j]>kulcs; j--){
            a[j+1] = a[j];
        }
        a[j+1] = kulcs;
    }
}

int hasonlit(const void *al, const void *b1){
    int a = *(int*)a1;
    int b = *(int*)b1;
    if(a<b)
        return -1;
    if(a==b){
        return 0;
    }
    if(a>b){
        return 1;
    }
}

int main() {
    int a[10] = {5, 1, 3, 9, 7, 6, 8, 2, 4, 10};
    kiir(a, 10);
    printf("Minimum erteke = %d\n", min_ertek(a, 10));
    printf("Minimum indexe = %d\n", mini_index(a, 10));
    printf("Paros elemek szama = %d\n", paros(a, 10));
    //minkivalaszt(a, 10);
    //buborekos(a, 10);
    beszurasos(a, 10);
    kiir(a, 10); // Rendezetten is kiírjuk a tömböt
    qsort(a,10,sizeof(int), hasonlit)
    return 0;
}
