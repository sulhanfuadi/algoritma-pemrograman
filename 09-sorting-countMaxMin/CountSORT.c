/*Nama File: CountSORT.c*/
/*Deskripsi: Mengurut tabel integer [1..N] dengan pencacahan*/
/*Pembuat: Sulhan Fuadi - 24060123130115*/
/*Tanggal Pembuatan: 19 Mei 2024*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void CountSORT(int T[], int N) {
    /* Kamus Lokal */
    int i, k;
    int valMax;
    int valMin;

    /* Algoritma */
    // Mencari nilai valMax dan valMin
    valMax = T[0];
    valMin = T[0];
    for (i = 1; i < N; i++) {
        if (T[i] > valMax) {
            valMax = T[i];
        } else {
            if (T[i] < valMin)
            {
                valMin = T[i];
            }
        }
    }

    int *TabCount = (int *)malloc((valMax - valMin + 1) * sizeof(int));

    // Jika valMin bernilai negatif
    if (valMin < 0) 
    {
        // Inisialisasi TabCount
        for (i = valMin; i <= valMax; i++) {
            TabCount[i - valMin] = 0;
        }
        // Counting
        for (i = 0; i < N; i++) {
            TabCount[T[i] - valMin]++;
        }
        // Pengisian kembali tabel T
        k = 0;
        for (i = valMin; i <= valMax; i++) {
            while (TabCount[i - valMin] != 0) {
                T[k] = i;
                k++;
                TabCount[i - valMin]--;
            }
        }
    } 
    // Jika valMin bernilai 0 atau positif
    else
    {
        // Inisialisasi TabCount
        for (i = valMin; i <= valMax; i++) {
            TabCount[i] = 0;
        }
        // Counting
        for (i = 0; i < N; i++) {
            TabCount[T[i]]++;
        }
        // Pengisian kembali tabel T
        k = 0;
        for (i = 0; i <= valMax; i++) {
            while (TabCount[i] != 0) {
                T[k] = i;
                k++;
                TabCount[i]--;
            }
        }
    }

    /* Output */
    for (i = 0; i < 8; i++) {
        printf("%d ", T[i]);
    }

    return 0;
}

int main() {
    /*Kamus Lokal*/
    int T[8] = {2, 5, 3, 0, 2, 3, 0, 3}; // tabel integer
    int i;

    /*Algoritma*/
    CountSORT(T, 8);

    return 0;
}
