// Bola Fakhrell Hilang
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
        for(j = i + 1; j < N; j++){
            if(T[j] < T[idxmin]){
                idxmin = j;
            }
        }
        temp = T[i];
        T[i] = T[idxmin];
        T[idxmin] = temp;
    }
}

int main() {
    int i, j;
    int a, b;

    scanf("%d %d", &a, &b);

    int arr1[a], arr2[b];

    for(i = 0; i < a; i++) {
        scanf("%d", &arr1[i]);
    }

    for(i = 0; i < b; i++) {
        scanf("%d", &arr2[i]);
    }

    AscSelectionSORT(arr1, a);
    AscSelectionSORT(arr2, b);

    i = 0, j = 0;
    while(i < a && j < b) {
        if(arr1[i] < arr2[j]) {
            printf("%d ", arr1[i]);
            i++;
        } else if(arr1[i] > arr2[j]) {
            j++;
        } else {
            i++;
            j++;
        }
    }

    while(i < a) {
        printf("%d ", arr1[i]);
        i++;
    }

    return 0;
}
