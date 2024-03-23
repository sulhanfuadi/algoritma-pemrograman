/*Nama File: JumFrekNilTabel.c*/
/*Deskripsi: menampilkan jumlah nilai-nilai elemen tabel T yang frekuensi kemunculannya lebih dari satu kali dari Tabel T yang berisi bilangan integer sembarang lebih besar nol*/
/*Pembuat: Sulhan Fuadi - 24060123130115*/
/*Tanggal Pembuatan: 15 Maret 2024*/

#include<stdio.h>
#include<stdlib.h>

int main() {
    /* Kamus Lokal */
    int N, i, j, count, total;

    /* Algoritma */
    printf("==================== Pencetak Total Nilai Frekuensi Kemunculan Lebih dari Satu Kali ====================\n");
    printf("Masukkan jumlah elemen tabel: ");
    scanf("%d", &N);
    printf("Masukkan elemen tabel:\n");
    int T[N];
    for (i = 0; i < N; i++) {
        scanf("%d", &T[i]);
    }

    total = 0;
    for (i = 0; i < N; i++) {
        count = 0;
        for (j = 0; j < N; j++) {
            if (T[i] == T[j]) {
                count++;
            }
        }
        if (count > 1) {
            total += T[i];
        }
    }
    printf("Total jumlah nilai-nilai elemen tabel T yang frekuensi kemunculannya lebih dari satu kali adalah %d\n", total);

    return 0;
}   