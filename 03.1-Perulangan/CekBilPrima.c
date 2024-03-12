/*Nama File: CekBilPrima.c*/
/*Deskripsi: menentukan apakah sebuah bilangan integer sembarang N (N>0) adalah sebuah bilangan prima atau bukan*/
/*Pembuat: Sulhan Fuadi - 24060123130115*/
/*Tanggal Pembuatan: 08 Maret 2024*/

#include<stdio.h>
#include<stdlib.h>

int main () {
/* Kamus Lokal */
    int n, i, count;

/* Algoritma */
    printf("==================== Apakah Bilangan Prima? ====================\n");
    printf("Masukkan nilai N yang ingin di-cek: \n");
    scanf("%d", &n);

    if (n > 0) {
        count = 0;  
        for (i = 1; i <= n; i++) {
            if (n % i == 0) {
                count++;
            }
        }

        if (count == 2) {
            printf("%d adalah bilangan prima", n);
        } else {
            printf("%d bukanlah bilangan prima", n);
        }
    } else {
        printf("Masukan N harus bernilai positif!");
    }

    return 0;
}
