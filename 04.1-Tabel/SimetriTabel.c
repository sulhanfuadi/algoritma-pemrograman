/*Nama File: SimetriTabel.c*/
/*Deskripsi: mengecek apakah 2 buah tabel sama(ukurannya sama dan nilai pada setiap elemen tabel T1 dan T2 juga sama)*/
/*Pembuat: Sulhan Fuadi - 24060123130115*/
/*Tanggal Pembuatan: 15 Maret 2024*/

#include<stdio.h>
#include<stdlib.h>

int main() {
    /* Kamus Lokal */
    int i, j, x, y, isSimetri;

    /* Algoritma */
    printf("==================== Pengecek Tabel Simetri ====================\n");
    printf("Masukkan jumlah elemen tabel 1: ");
    scanf("%d", &x);
    printf("Masukkan elemen tabel 1:\n");
    int T1[x];
    for (i = 0; i < x; i++) {
        scanf("%d", &T1[i]);
    }
    printf("Masukkan jumlah elemen tabel 2: ");
    scanf("%d", &y);
    printf("Masukkan elemen tabel 2:\n");
    int T2[y];
    for (i = 0; i < y; i++) {
        scanf("%d", &T2[i]);
    }

    isSimetri = 1;
    if (x == y) {
        for (i = 0; i < x; i++) {
            if (T1[i] != T2[i]) {
                isSimetri = 0;
            }
        }
        if (isSimetri == 1) {
            printf("Simetri");
        } else {
            printf("Tidak Simetri");
        }
    } else {
        printf("Tidak Simetri");
    }

    return 0;
}   