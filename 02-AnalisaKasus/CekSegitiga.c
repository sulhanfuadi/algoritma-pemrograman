/*Nama File: CekSegitiga.c*/
/*Deskripsi: mengidentifikasi dan menampilkan jenis segitiga berdasarkan nilai sisis yang dimasukan*/
/*Pembuat: Sulhan Fuadi*/
/*Tanggal Pembuatan: 29 Februari 2024*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main () {
/* Kamus Lokal */
    int a, b, c;

/* Algoritma */
    printf("==================== Mengidentifikasi Jenis Segitiga ====================\n");
    printf("Masukkan nilai sisi 1: \n");
    scanf("%d", &a);
    printf("Masukkan nilai sisi 2: \n");
    scanf("%d", &b);
    printf("Masukkan nilai sisi 3: \n");
    scanf("%d", &c);
    if ((a > 0) || (b > 0) || (c > 0)) {
        if ((a == b) && (a == c) && (b == c)) {
        printf("Segitiga dengan niai sisi %d, %d, dan %d adalah Segitiga Sama Sisi", a, b, c);
        } else if ((a==b && b!=c && a!=c) || (b==c && b!=a && a!=c) || (a==c && b!=a && b!=c)) {
        printf("Segitiga dengan niai sisi %d, %d, dan %d adalah Segitiga Sama Kaki", a, b, c);
        } else {
        printf("Segitiga dengan niai sisi %d, %d, dan %d adalah Segitiga Sembarang", a, b, c);
        }
    } else {
        printf("Terdapat  nilai  yang  bukan  sisi  segitiga");
    }
    return 0;
}
