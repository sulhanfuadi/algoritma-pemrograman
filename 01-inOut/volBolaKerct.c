/*Nama File: volBolaKerct.c*/
/*Deskripsi: menghitung dan menampilkan Volume Bola dan Volume Kerucut dengan jari-jari tertentu*/
/*Pembuat: Sulhan Fuadi*/
/*Tanggal Pembuatan: 22 Februari 2024*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main () {
/* Kamus Lokal */
    float r, Vb, Vk;
    const float PHI = 3.1415;

/* Algoritma */
    printf("========== Menghitung Volume Bola dan Volume Kerucut ==========\n");
    printf("Masukkan nilai jari-jari dalam meter, r: \n");
    scanf("%f", &r);
    Vb  =  1.333333333  *  (PHI * pow(r, 3));
    Vk  =  0.5  *  Vb;
    printf("Hasil: \n Dengan jari-jari %.2f meter, dan nilai PHI %.4f, didapat \n Volume Bola sebesar %.2f meter kubik dan Volume Kerucut sebesar %.2f meter kubik", r, PHI, Vb, Vk);
    return 0;
}
