/*Nama File: BukanKelipatanK.c*/
/*Pembuat: Sulhan Fuadi - 24060123130115*/
/*Tanggal Pembuatan: 08 Maret 2024*/
/*Kasus: 
    Akemi merupakan seseorang yang sangat membenci angka k. Akemi ingin
    menghilangkan seluruh angka kelipatan k pada domain bilangan bulat. Karena hal
    tersebut kamu diminta oleh Akemi untuk menampilkan n baris pertama dari deret
    bilangan bulat tersebut tanpa angka yang merupakan kelipatan k.
*/

#include<stdio.h>
#include<stdlib.h>

int main () {
/* Kamus Lokal */
    int i, k, n, count;

/* Algoritma */
    printf("==================== Bantu Keanehan Akemi! ====================\n");
    printf("Masukkan k: \n");
    scanf("%d", &k);
    printf("Masukkan n: \n");
    scanf("%d", &n);

    printf("========================= Deret Bilangan =========================\n");

    i = 1;
    count = 1;

    while (count <= n) {
        if (i % k != 0) {
            printf("%d\t", i);
            count++;
        }
        i++;
    }

    return 0;
}
