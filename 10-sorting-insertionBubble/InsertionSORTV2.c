/*Nama File: InsertionSORTV2.c*/
/*Deskripsi: Mengurut tabel integer [1..N] dengan insertion sort*/
/*Pembuat: Sulhan Fuadi - 24060123130115*/
/*Tanggal Pembuatan: 30 Mei 2024*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void InsertionSORT(int T[], int n) {
    /* Kamus Lokal */
    int i, j;
    int temp;

    /* Algoritma */
    for (i = 1; i < n; i++) {
        temp = T[i];
        j = i - 1;
    
        while ((j >= 0) && (T[j] > temp)) {
            T[j + 1] = T[j];
            j = j - 1;
        }
        
        T[j + 1] = temp;
    }
}

int main() {
    /*Kamus Lokal*/
    int T[8] = {2, 5, 3, 0, 2, 3, 0, 3};
    int i;

    /*Algoritma*/
    printf("Sebelum diurutkan: ");
    for (i = 0; i < 8; i++) {
        printf("%d ", T[i]);
    }

    printf("\nSetelah diurutkan: ");
    InsertionSORT(T, 8);
    for (i = 0; i < 8; i++) {
        printf("%d ", T[i]);
    }

    return 0;
}
