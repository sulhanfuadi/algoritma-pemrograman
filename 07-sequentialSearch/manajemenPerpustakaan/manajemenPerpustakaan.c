/*Nama File: manajemenPerpustakaan.c*/
/*Pembuat: Sulhan Fuadi - 24060123130115*/
/*Tanggal Pembuatan: 05 Mei 2024*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_BOOKS 100
#define MAX_NAME_LENGTH 101

char library_name[MAX_BOOKS][MAX_NAME_LENGTH];
int library_quantity[MAX_BOOKS];

int main() {
    /* Kamus Lokal */
    int library_size = 0;
    int Q, i, j, k, q;

    /* Algoritma */
    printf("==================== Aplikasi Manajemen Perpustakaan ====================\n");
    printf("Masukkan jumlah pengunjung: ");
    scanf("%d", &Q);
    for (i = 0; i < Q; i++) {
        char b[MAX_NAME_LENGTH];
        printf("Masukkan operasi dan nama buku: ");
        scanf("%d %[^\n]", &q, b);
        int index = -1;
        for (j = 0; j < library_size; j++) {
            k = 0;
            while (library_name[j][k] == b[k] && library_name[j][k] != '\0' && b[k] != '\0') {
                k++;
            }
            if (library_name[j][k] == '\0' && b[k] == '\0') {
                index = j;
                break;
            }
        }
        if (index == -1) {
            k = 0;
            while (b[k] != '\0') {
                library_name[library_size][k] = b[k];
                k++;
            }
            library_name[library_size][k] = '\0';
            library_quantity[library_size] = 0;
            index = library_size;
            library_size++;
        }
        if (q == 1) {
            printf("%d\n", library_quantity[index]);
        } else if (q == 2) {
            library_quantity[index]++;
            printf("Terima Kasih\n");
        } else if (q == 3) {
            if (library_quantity[index] > 0) {
                library_quantity[index]--;
                printf("Buku Berhasil Dipinjam\n");
            } else {
                printf("Maaf Stok Kosong\n");
            }
        }
    }
    return 0;
}
