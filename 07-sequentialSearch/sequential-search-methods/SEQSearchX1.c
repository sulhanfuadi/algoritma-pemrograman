/*Nama File: SEQSearchX1.c*/
/*Deskripsi: Mencari harga X dalam Tabel T [1..N] secara sekuensial mulai dari T1. 
Hasilnya adalah indeks IX di mana Tix = X (i terkecil).*/
/*Pembuat: Sulhan Fuadi - 24060123130115*/
/*Tanggal Pembuatan: 05 Mei 2024*/

#include <stdio.h>

int main() {
    /* Kamus Lokal */
    int i, N, X, IX;

    /* Algoritma */
    int T[5] = {1, 2, 3, 4, 5};
    N = 5;
    X = 3;
    i = 0;

    while (i < N && T[i] != X) {
        i = i + 1;
    }
    if (T[i] == X) {
        IX = i;
    } else {
        IX = 0;
    }

    if (IX != 0) {
        printf("Harga X ditemukan di indeks: %d\n", IX); // Harga X ditemukan di indeks: 2 (angka 3 (X = 3, angka yang dicari) berada di-indeks ke-2
    } else {
        printf("Harga X tidak ditemukan dalam Tabel T\n");
    }

    return 0;
}
