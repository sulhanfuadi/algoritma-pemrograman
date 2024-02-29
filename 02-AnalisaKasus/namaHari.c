/*Nama File: namaHari.c*/
/*Deskripsi: mengidentifikasi dan menampilkan nama hari berdasarkan masukan nomor hari dari pengguna*/
/*Pembuat: Sulhan Fuadi*/
/*Tanggal Pembuatan: 29 Februari 2024*/

#include<stdio.h>
#include<stdlib.h>

int main () {
/* Kamus Lokal */
    int i;

/* Algoritma */
    printf("==================== Mengidentifikasi Nama Hari ====================\n");
    printf("Masukkan nomor hari yang ingin dicek: \n");
    scanf("%d", &i);
    if (1 <= i && i <= 7) {
        switch (i) {
        case 1:
            printf("Senin");
            break;
        case 2:
            printf("Selasa");
            break;
        case 3:
            printf("Rabu");
            break;
        case 4:
            printf("Kamis");
            break;
        case 5:
            printf("Jum'at");
            break;
        case 6:
            printf("Sabtu");
            break;
        default:
            printf("Minggu");
            break;
        }
    } else {
        printf("Masukan nomor hari tidak tepat");
    }
    return 0;
}
