/*Nama File: SEQSearchX2.c*/
/*Deskripsi: Mencari harga X dalam Tabel T[1..N] secara sekuensial mulai dari T1,  
Hasilnya adalah indeks IX di mana Ti=X (i terkecil), 
IX = 0 jika tidak ketemu dan sebuah boolean Found (true jika ketemu).*/
/*Pembuat: Sulhan Fuadi - 24060123130115*/
/*Tanggal Pembuatan: 05 Mei 2024*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    /* Kamus Lokal */
    int i, N, X, IX;
    bool Found;

    /* Algoritma */
    int T[5] = {1, 2, 3, 4, 5};
    N = 5;
    X = 3;
    i = 0;
    Found = false;

    while (i <= N && !Found) {
        if (T[i] == X) {
            Found = true;
        } else {
            i = i + 1;
        }
    }
    
    if (Found) {
        IX = i;
    } else {
        IX = 0;
    }
    
    printf("Found: %d\n", Found); // Found: 1 (true, karena ketemu)
    printf("IX: %d\n", IX); // IX: 2 (angka 3 (X = 3, angka yang dicari) berada di-indeks ke-2)

    return 0;
}