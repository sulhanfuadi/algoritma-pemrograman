/*Nama File: DescSelectionSORT.c*/
/*Deskripsi: Mengurut tabel integer [1..N] terurut mengecil dengan maksimum suksesif*/
/*Pembuat: Sulhan Fuadi - 24060123130115*/
/*Tanggal Pembuatan: 19 Mei 2024*/

#include <stdio.h>

void DescSelectionSORT(int T[], int N){
    /* Kamus lokal */
    int i, j, k;
    int temp;
    int idxmax;

    /* Algoritma */
    for(i = 0; i < N; i++){
        idxmax = i;
        for(j = i; j < N; j++){
            if(T[j] > T[idxmax]){
                idxmax = j;
            }
        }
        temp = T[i];
        T[i] = T[idxmax];
        T[idxmax] = temp;
    }

    for(k = 0; k < N; k++){
        printf("%d ", T[k]);
    }
}

int main(){
    /* Kamus lokal */
    int T[5] = {11, 12, 25, 22, 64};
    int N = 5;

    /* Algoritma */
    DescSelectionSORT(T, N);
}