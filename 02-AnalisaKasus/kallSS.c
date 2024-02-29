/*Nama File: kallSS.c*/
/*Deskripsi: mengidentifikasi jenis operasi dan mengoperasikan masukan berdasar jenis operasi*/
/*Pembuat: Sulhan Fuadi*/
/*Tanggal Pembuatan: 29 Februari 2024*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main () {
/* Kamus Lokal */
    int iA, iB;
    char operasi;

/* Algoritma */
    printf("=== Mengidentifikasi Jenis Operasi dan Mengoperasikan ===\n");
    printf("Masukkan nilai A: \n");
    scanf("%d", &iA);
    printf("Masukkan nilai B: \n");
    scanf("%d", &iB);
    printf("Masukkan jenis operasi: \n");
    scanf(" %c", &operasi);
    switch (operasi) {
        case 'a':
            printf("%d + %d = %d",iA, iB, iA+iB);
            break;
        case 'b':
            printf("%d - %d = %d",iA, iB, iA-iB);
            break;
        case 'c':
            printf("%d * %d = %d",iA, iB, iA*iB);
            break;
        case 'd':
            printf("%d / %d = %.2f",iA, iB, (float) iA/iB);
            break;
        case 'e':
            printf("%d div %d = %d",iA, iB, iA / iB);
            break;
        case 'f':
            printf("%d mod %d = %d",iA, iB, iA % iB);
            break;
        default:
            printf("Bukan pilihan menu yang benar");
            break;
        }
    return 0;
}
