/*Nama File: FaktorBil.c*/
/*Deskripsi: menentukan dan menampilkan faktor bilangan yang dapat dibentuk oleh bilangan N*/
/*Pembuat: Sulhan Fuadi - 24060123130115*/
/*Tanggal Pembuatan: 07 Maret 2024*/

#include<stdio.h>
#include<stdlib.h>

int main () {
/* Kamus Lokal */
    int n, i;

/* Algoritma */
    printf("==================== Menentukan Faktor Bilangan ====================\n");
    printf("Masukkan nilai N untuk membentuk faktor bilangan: \n");
    scanf("%d", &n);

    printf("Faktor Bilangannya adalah: \n");
    if (n > 0) {
        for (i = 1; i <= n; i++) {
            if (n % i == 0) {
                printf("%d ", i);
            }
        }
    } else {
        printf("Masukan N harus bernilai positif!");
    }

    return 0;
}
