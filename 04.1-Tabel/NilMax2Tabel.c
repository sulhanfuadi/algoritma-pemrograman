/*Nama File: NilMax2Tabel.c*/
/*Deskripsi: menampilkan nilai maksimum ke-2 dari Tabel  T  yang  berisi  bilangan  integer  sembarang  lebih  besar  nol,*/
/*Pembuat: Sulhan Fuadi - 24060123130115*/
/*Tanggal Pembuatan: 14 Maret 2024*/

#include<stdio.h>
#include<stdlib.h>

int main () {
/* Kamus Lokal */
    int N, i, max1, max2;

/* Algoritma */
    printf("==================== Pencetak Nilai Maksimum Ke-2 ====================\n");
    printf("Masukkan jumlah elemen tabel: ");
    scanf("%d", &N);
    printf("Masukkan elemen tabel:\n");
    int T[N];
    for (i = 0; i < N; i++) {
        scanf("%d", &T[i]);
    }

    max1 = 0;
    max2 = 0;
    for (i = 0; i < N; i++) {
        if (T[i] > max1) {
            max2 = max1;
            max1 = T[i];
        }
        else{
            if (T[i] > max2 && T[i] != max1) {
                max2 = T[i];
            }
        }
    }
    printf("Nilai maksimum ke-2 adalah %d\n", max2);

    return 0;
}
