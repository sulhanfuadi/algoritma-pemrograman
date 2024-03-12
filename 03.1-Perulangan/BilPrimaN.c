/*Nama File: BilPrimaN.c*/
/*Deskripsi: mencetak bilangan Prima sampai dengan bilangan integer sembarang N positif*/
/*Pembuat: Sulhan Fuadi - 24060123130115*/
/*Tanggal Pembuatan: 08 Maret 2024*/

#include<stdio.h>
#include<stdlib.h>

int main () {
/* Kamus Lokal */
    int n, i, j, count;

/* Algoritma */
    printf("==================== Pencetak Bilangan Prima ====================\n");
    printf("Masukkan nilai N: \n");
    scanf("%d", &n);

    printf("Hasil cetaknya adalah: \n");
    if (n > 0) {
        for (i = 1; i <= n; i++) {
            count = 0;
            for (j = 1; j <= i; j++) {
                if (i % j == 0) {
                    count++;
                }
            }
            
            if (count == 2) {
                printf("%d\t", i);
            }
        }
    } else {
        printf("Masukan N harus bernilai positif!");
    }

    return 0;
}
