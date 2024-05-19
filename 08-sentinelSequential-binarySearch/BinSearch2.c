/*Nama File: BinSearch2.c*/
/*Deskripsi: Mencari harga X dalam Tabel T [1..N] secara dikotomik
    Hasilnya adalah sebuah boolean Found, true jika ketemu dan IX yang  
    merupakan indeks di mana X ditemukan
    Nilai elemen tabel terurut membesar:  T1 ≤ T2 ≤ T3  ...    ≤ TN */
/*Pembuat: Sulhan Fuadi - 24060123130115*/
/*Tanggal Pembuatan: 11 Mei 2024*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    /* Kamus Lokal */
    int N, X, IX, Atas, Bawah, Tengah;
    bool Found;

    /* Algoritma */
    int T[5] = {1, 2, 3, 4, 5};
    N = 5;
    X = 3;

    //indeks dimulai dari 1
    Atas = 1;
    Bawah = N;
    Found = false;

    Tengah = (Atas + Bawah) / 2;
    while (Atas <= Bawah && X != T[Tengah]) {
        Tengah = (Atas + Bawah) / 2;
        if (X < T[Tengah]) {
            Bawah = Tengah - 1;
        } else if (X > T[Tengah]) {
            Atas = Tengah + 1;
        }
    }

    if (X == T[Tengah]) {
        Found = true;
        IX = Tengah + 1;
        printf("Bilangan X = %d ditemukan di indeks: %d\n", X, IX);
    } else {
        printf("Bilangan X = %d tidak ditemukan dalam Tabel T\n", X);
    }

    return 0;
}
