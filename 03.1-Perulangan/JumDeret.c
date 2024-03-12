/*Nama File: JumDeret.c*/
/*Deskripsi: menghitung jumlah total jika diberikan deret bilangan sebanyak N*/
/*Pembuat: Sulhan Fuadi - 24060123130115*/
/*Tanggal Pembuatan: 07 Maret 2024*/

#include<stdio.h>
#include<stdlib.h>

int main () {
/* Kamus Lokal */
    int n, i, total;

/* Algoritma */
    printf("==================== Jumlah Total Deret Bilangan ====================\n");
    printf("Masukkan jumlah deret bilangan: \n");
    scanf("%d", &n);

    if (n > 0) {
        total = 0;
        for (i = 1; i <= n; i++) {
            total += i;
        }
        printf("Jumlah total deret bilangan sebanyak %d adalah %d", n, total);
    } else {
        printf("Masukan N harus bernilai positif!");
    }

    return 0;
}
