/*Nama File: SegitigaUnik.c*/
/*Pembuat: Sulhan Fuadi - 24060123130115*/
/*Tanggal Pembuatan: 08 Maret 2024*/
/*Kasus: 
    Arisu merupakan seorang yang sangat mencintai pola. Kamu diminta oleh Arisu
    untuk membuat sebuah pola segitiga unik dengan n baris yang berisikan angka 0-9,
    dan jika angkanya habis kembali ke 0. Contoh pola dapat dilihat pada contoh masukan
    dan keluaran.
*/

#include<stdio.h>
#include<stdlib.h>

int main () {
/* Kamus Lokal */
    int n, i, j, angka;

/* Algoritma */
    printf("==================== Arisu Penyembah Pola Segitiga Unik ====================\n");
    printf("Masukkan n: \n");
    scanf("%d", &n);

    printf("========================= Pola Segitiga =========================\n");
    angka = 0;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", angka % 10);
            angka++;
        }
        printf("\n");
    }

    return 0;
}