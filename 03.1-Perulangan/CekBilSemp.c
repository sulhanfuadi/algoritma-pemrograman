/*Nama File: CekBilSemp.c*/
/*Deskripsi: menentukan apakah sebuah bilangan integer sembarang N (N>0) adalah bilangan Sempurna atau Bukan*/
/*Pembuat: Sulhan Fuadi - 24060123130115*/
/*Tanggal Pembuatan: 07 Maret 2024*/

#include<stdio.h>
#include<stdlib.h>

int main () {
/* Kamus Lokal */
    int n, i, totalFaktor;

/* Algoritma */
    printf("==================== Apakah Bilangan Sempurna? ====================\n");
    printf("Masukkan nilai N yang ingin di-cek: \n");
    scanf("%d", &n);

    if (n > 0) {
        totalFaktor = 0;
        for (i = 1; i <= n; i++) {
            if ((n % i == 0) && (i != n)) {
                totalFaktor += i;
            }
        }
        
        if (totalFaktor == n) {
            printf("%d adalah bilangan sempurna", n);
        } else {
            printf("%d bukanlah bilangan sempurna", n);
        }
    } else {
        printf("Masukan N harus bernilai positif!");
    }

    return 0;
}
