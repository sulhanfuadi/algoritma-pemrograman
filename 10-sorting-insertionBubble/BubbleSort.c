/*Nama File: BubbleSort.c*/
/*Deskripsi: Mengurut tabel integer [1..N] dengan bubble sort*/
/*Pembuat: Sulhan Fuadi - 24060123130115*/
/*Tanggal Pembuatan: 30 Mei 2024*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void BubbleSort(int T[], int n) {
    /* Kamus Lokal */
    int i, j;
    int temp;

    /* Algoritma */
    for (i = 0; i < n - 1; i++) {
        for (j = n - 1; j >= i + 1; j--) {
			if (T[j] < T[j - 1]) {
                    temp = T[j];
                    T[j] = T[j - 1];
                    T[j - 1] = temp;
            }
        }
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
    BubbleSort(T, 8);
    for (i = 0; i < 8; i++) {
        printf("%d ", T[i]);
    }

    return 0;
}
