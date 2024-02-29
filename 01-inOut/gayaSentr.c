/*Nama File: gayaSentr.c*/
/*Deskripsi: menghitung dan menampilkan Gaya yang terjadi dari suatu benda dengan spesifikasi tertentu*/
/*Pembuat: Sulhan Fuadi*/
/*Tanggal Pembuatan: 22 Februari 2024*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main () {
/* Kamus Lokal */
    float m, v, r, F;

/* Algoritma */
    printf("==================== Menghitung Gaya Sentripetal ====================\n");
    printf("Masukkan nilai massa dalam kg, m: \n");
    scanf("%f", &m);
    printf("Masukkan nilai kecepatan dalam meter per detik, v: \n");
    scanf("%f", &v);
    printf("Masukkan nilai jari-jari dalam meter, r: \n");
    scanf("%f", &r);
    F = m * (pow(v, 2)/r);
    printf("Hasil: \n Gaya yang terjadi dari benda dengan massa %.2f kg, kecepatan %.2f m/s, dan jari-jari %.2f meter adalah %.2f Newton", m, v, r, F);
    return 0;
}
