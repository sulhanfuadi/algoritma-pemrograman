/*Nama File: FrekNilTabel.c*/
/*Deskripsi: menampilkan nilai elemen tabel T yang frekuensi kemunculannya lebih dari satu kali dari Tabel  T  yang  berisi  bilangan  integer  sembarang  lebih  besar  nol,*/
/*Pembuat: Sulhan Fuadi - 24060123130115*/
/*Tanggal Pembuatan: 14 Maret 2024*/

#include<stdio.h>
#include<stdlib.h>

int main () {
/* Kamus Lokal */
    int N, i, j, count;

/* Algoritma */
    printf("==================== Pencetak Elemen Frekuensi > 1 ====================\n");
    printf("Masukkan jumlah elemen tabel: ");
    scanf("%d", &N);
    printf("Masukkan tiap elemen tabel:\n");
    int T[N];
    for (i = 0; i < N; i++) {
        scanf("%d", &T[i]);
    }

    printf("Nilai elemen tabel yang frekuensi kemunculannya lebih dari satu kali yaitu: \n");
    for (i = 0; i < N; i++) {
        count = 0;
        for (j = 0; j < i; j++) {
            if ((T[i] == T[j]) && (i != j)) {
                count++;
            }
        }

    if (count == 1) {
      printf("%d ", T[i]);
    }
  }

    return 0;
}
