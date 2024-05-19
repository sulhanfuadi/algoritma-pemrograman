/*Nama File: jumlahGanjil.c*/
/*Deskripsi: mencetak jumlah bilangan ganjil dari 0 hingga n*/
/*Pembuat: Sulhan Fuadi - 24060123130115*/
/*Tanggal Pembuatan: 27 Maret 2024*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main () {
/* Kamus Lokal */
    int n, i, total;

/* Algoritma */
    // printf("==================== Jangan Buat Bercchan Marah ====================\n");
    // printf("Masukkan nilai N: \n");
    scanf("%d", &n);

    // printf("Hasil jumlah bilangan adalah: \n");
    if (n > 0) {
        total = 0;
        for (i = 1; i <= n; i++) {
            if (i % 2 != 0) {
                total += i;
            }
        }
        printf("%d", total);
    } else {
        printf("Masukan N harus bernilai positif!");
    }

    return 0;
}
