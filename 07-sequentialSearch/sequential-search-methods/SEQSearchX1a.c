/*Nama File: SEQSearchX1a.c*/
/*Deskripsi: Mencari harga X dalam Tabel T [1..N] secara sekuensial mulai dari T1 
Hasilnya adalah sebuah nilai boolean Found (true jika ketemu, false jika 
tidak. Pada versi ini informasi yang diperlukan adalah ketemu atau tidak 
ketemu, namun kita tidak mendapatkan informasi di mana indeks nilai yang 
dicari diketemukan).*/
/*Pembuat: Sulhan Fuadi - 24060123130115*/
/*Tanggal Pembuatan: 05 Mei 2024*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    /* Kamus Lokal */
    int i, N, X;
    bool Found;

    /* Algoritma */
    int T[5] = {1, 2, 3, 4, 5};
    N = 5;
    X = 3;
    i = 0;
    Found = false;

    while (i < N && T[i] != X) {
        i = i + 1;
    }
    
    Found = (T[i] == X);
    
    printf("Found: %d\n", Found); // Found: 1 (true)

    return 0;
}