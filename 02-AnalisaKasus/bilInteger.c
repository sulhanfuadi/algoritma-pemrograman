/*Nama File: bilInteger.c*/
/*Deskripsi: mengidentifikasi dan menampilkan bahwa bilangan masukan adalah bilangan bulat positif atau nol atau bulat negatif*/
/*Pembuat: Sulhan Fuadi*/
/*Tanggal Pembuatan: 29 Februari 2024*/

#include<stdio.h>
#include<stdlib.h>

int main () {
/* Kamus Lokal */
    int i;

/* Algoritma */
    printf("==================== Mengidentifikasi Bilangan Bulat ====================\n");
    printf("Masukkan nilai bilangan yang ingin dicek: \n");
    scanf("%f", &i);
    if (i > 0) {
        printf("Hasil: \n Bilangan yang Anda masukan adalah Bilangan Bulat Positif");
    } else if (i == 0) {
        printf("Hasil: \n Bilangan yang Anda masukan adalah Bilangan Nol");
    } else {
        printf("Hasil: \n Bilangan yang Anda masukan adalah Bilangan Bulat Negatif");
    }
    return 0;
}
