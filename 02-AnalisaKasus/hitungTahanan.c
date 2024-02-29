/*Nama File: hitungTahanan.c*/
/*Deskripsi: mengidentifikasi dan menghitung total nilai tahanan yang dimasukan*/
/*Pembuat: Sulhan Fuadi*/
/*Tanggal Pembuatan: 29 Februari 2024*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main () {
/* Kamus Lokal */
    int t1, t2, t3, total;

/* Algoritma */
    printf("==================== Mengidentifikasi dan Menghitung Nilai Tahanan ====================\n");
    printf("Masukkan nilai tahanan 1, t1: \n");
    scanf("%d", &t1);
    printf("Masukkan nilai tahanan 2, t2: \n");
    scanf("%d", &t2);
    printf("Masukkan nilai tahanan 3, t3: \n");
    scanf("%d", &t3);
    total = t1 + t2 + t3;
    if ((t1 < 0) || (t2 < 0) || (t3 < 0)) {
        printf("Masukan tahanan tidak boleh negatif");
    } else {
        printf("Hasil  total tahanan jika dirangkai seri adalah %d", total);
    }
    return 0;
}
