/*Nama File: namaBulan.c*/
/*Deskripsi: mengidentifikasi dan menampilkan nama bulan berdasarkan masukan nomor bulan dari pengguna*/
/*Pembuat: Sulhan Fuadi*/
/*Tanggal Pembuatan: 29 Februari 2024*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main () {
/* Kamus Lokal */
    int i;

/* Algoritma */
    printf("==================== Mengidentifikasi Nama Bulan ====================\n");
    printf("Masukkan nomor bulan yang ingin dicek: \n");
    scanf("%d", &i);
    if (i >= 1 && i <= 12) {
        switch (i) {
        case 1:
            printf("Januari");
            break;
        case 2:
            printf("Februari");
            break;
        case 3:
            printf("Maret");
            break;
        case 4:
            printf("April");
            break;
        case 5:
            printf("Mei");
            break;
        case 6:
            printf("Juni");
            break;
        case 7:
            printf("Juli");
            break;
        case 8:
            printf("Agustus");
            break;
        case 9:
            printf("September");
            break;
        case 10:
            printf("Oktober");
            break;
        case 11:
            printf("November");
            break;
        default:
            printf("Desember");
            break;
        }
    } else {
        printf("Masukan nomor hari tidak tepat");
    }
    return 0;
}
