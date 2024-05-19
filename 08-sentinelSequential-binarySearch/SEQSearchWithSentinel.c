/*Nama File: SEQSearchWithSentinel.c*/
/*Deskripsi: Mencari harga X dalam Tabel T [1..N] secara sekuensial mulai dari T1
    Hasilnya adalah indeks IX di mana T IX = X (IX terkecil)
    IX = 0 jika tidak ketemu. Sentinel diletakkan di T N+1*/
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

    T[N] = X;
    printf("Tabel dengan tambahan Sentinel: ");
    for(i = 0; i < N + 1; i++){
        printf("%d ", T[i]);
    }

    i = 0;
    while(T[i] != X){
        i++;
    }
    if(i < N){
        IX = i + 1; //indeks dimulai dari 1
        printf("\nBilangan X = %d ditemukan pada indeks ke %d\n",X,IX);
    }
    else{
        printf("\nBilangan X = %d ditemukan pada Sentinel, maka X = %d tidak ditemukan pada Tabel\n", X, X);
    }

    return 0;
}
