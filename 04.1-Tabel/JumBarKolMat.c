/*Nama File: JumBarKolMat.c*/
/*Deskripsi: menampilkan jumlah dari setiap baris dan kolom*/
/*Pembuat: Sulhan Fuadi - 24060123130115*/
/*Tanggal Pembuatan: 16 Maret 2024*/

#include<stdio.h>
#include<stdlib.h>

int main() {
    /* Kamus Lokal */
    int i, j, Baris, Kolom, total;

    /* Algoritma */
    printf("==================== Jumlah Tiap Baris Kolom Matriks ====================\n");
    printf("Masukkan jumlah Baris: ");
    scanf("%d", &Baris);
    printf("Masukkan jumlah Kolom: ");
    scanf("%d", &Kolom);
    printf("Masukkan elemen Matriks:\n");
    int T[Baris][Kolom];

    if(Baris <= 0 && Kolom <= 0){
        printf("Masukkan harus positif");
    }
    else {
        for (i = 0; i < Baris; i++){
            for (j = 0; j < Kolom; j++){
                scanf("%d", &T[i][j]);
            }
        }

        for (i = 0; i < Baris; i++){
            total = 0;
            for (j = 0; j < Kolom; j++){
                total = total + T[i][j];
            }
            printf("Baris ke %d : %d \n", i + 1, total);
        }

        for (i = 0; i < Baris; i++){
            total = 0;
            for (j = 0; j < Kolom; j++){
                total = total + T[j][i];
            }
            printf("Kolom ke %d : %d \n", i + 1, total);
        }

    }
    return 0;
}