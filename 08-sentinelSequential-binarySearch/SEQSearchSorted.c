/*Nama File: SEQSearchSorted.c*/
/*Deskripsi: Mencari harga X dalam Tabel T [1..N] secara sekuensial mulai dari T1 } 
    Hasilnya adalah indeks IX di mana TIX = X; IX = 0 jika tidak ketemu */
/*Pembuat: Sulhan Fuadi - 24060123130115*/
/*Tanggal Pembuatan: 11 Mei 2024*/

#include <stdio.h>

int main() {
    /* Kamus Lokal */
    int i, N, X, IX;

    /* Algoritma */
    int T[5] = {1, 2, 3, 4, 5};
    N = 5;
    X = 3;

    i = 0;
    while((i < N) && (T[i] < X)){
        i++;
    }
    if(T[i] == X){
        IX = i + 1; //indeks dimulai dari 1
        printf("Bilangan X = %d ditemukan pada indeks ke %d\n", X, IX);
    }
    else{
        IX = 0;
        printf("Bilangan X = %d tidak ditemukan pada Tabel\n", X);
    }

    return 0;
}
