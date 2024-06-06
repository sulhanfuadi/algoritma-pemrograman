// WRDORD
// Sulhan Fuadi - 24060123130115
// Responsi Praktikum Algoritma Pemgrograman Lab E2 - 06 Juni 2024

#include <stdio.h>
#include <stdlib.h>

void AscSelectionSORT(int T[], int N){
    /* Kamus lokal */
    int i, j;
    int temp;
    int idxmin;

    /* Algoritma */
    for(i = 0; i < N; i++){
        idxmin = i;
        for(j = i; j < N; j++){
            if(T[j] < T[idxmin]){
                idxmin = j;
            }
        }
        temp = T[i];
        T[i] = T[idxmin];
        T[idxmin] = temp;
    }
}

void DescSelectionSORT(int T[], int N){
    /* Kamus lokal */
    int i, j;
    int temp;
    int idxmin;

    /* Algoritma */
    for(i = 0; i < N; i++){
        idxmin = i;
        for(j = i; j < N; j++){
            if(T[j] > T[idxmin]){
                idxmin = j;
            }
        }
        temp = T[i];
        T[i] = T[idxmin];
        T[idxmin] = temp;
    }
}

int main() {
    int i, j, k;
    int n;
    int T[200];
    int b1[100];
    int b2[100];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &T[i]);
    }

    AscSelectionSORT(T, n);

    j = 0;
    k = 0;
    for (i = 0; i < n; i++) {
        if (i % 2 == 0) {
            b1[j++] = T[i];
        } else {
            b2[k++] = T[i];
        }
    }

    DescSelectionSORT(b2, k);

    for (i = 0; i < j; i++) {
        printf("%d ", b1[i]);
        if (i < k) {
            printf("%d ", b2[i]);
        }
    }

    return 0;
}
