/*Nama File: AkagiKongou.c*/
/*Pembuat: Sulhan Fuadi - 24060123130115*/
/*Tanggal Pembuatan: 08 Maret 2024*/
/*Kasus: 
    Akagi dan Kongou merupakan seorang awak kapal di sebuah kapal perang. Di saat
    perjalanan, mereka bosan dan ingin melakukan permainan sederhana. Akagi memilih
    sebuah bilangan bulat A dan Kongou memilih sebuah bilangan bulat B. Berikut ini
    mekanisme permainan:
    - Pertama-tama buatlah suatu variabel C untuk menampung nilai A-B.
    - Lalu ganti nilai A menjadi B.
    - Lalu ganti nilai B menjadi C.
    - Jika nilai B masih positif, lakukan langkah pertama, jika nilai B menjadi 0
      maka Kongou menang, dan jika nilai B menjadi negatif maka Akagi menang.
    Buatlah sebuah program dengan diberikan angka A dan B yang menentukan alur
    perubahan angka A, B, C dan keluarkan hasilnya.*/

#include<stdio.h>
#include<stdlib.h>

int main () {
/* Kamus Lokal */
    int a, b, c, babak;

/* Algoritma */
    printf("==================== Perang Akagi dan Kongou ====================\n");
    printf("Masukkan angka yang dipilih Akagi: \n");
    scanf("%d", &a);
    printf("Masukkan angka yang dipilih Kongou: \n");
    scanf("%d", &b);

    printf("========================= Hasil Perang =========================\n");

    if (a > b) {
        babak = 1;

        while (b > 0) {
            c = a - b;
            a = b;
            b = c;

            printf("Babak %d \n", babak);
            printf("C = %d \n", c);
            printf("A = %d \n", a);
            printf("B = %d \n", b);

            babak++;

            if (b > 0) {
                continue;
            } else if (b == 0) {
                printf("Pemenangnya adalah Kongou");
            } else {
                printf("Pemenangnya adalah Akagi");
            }
        }
    } else {
        printf("Angka yang dipilih Akagi harus lebih besar dari angka Kongou!");
    }

    return 0;
}
