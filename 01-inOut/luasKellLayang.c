/*Nama File: luasKellLayang.c*/
/*Deskripsi: menghitung dan menampilkan Luas dan Keliling sebuah layang-layang*/
/*Pembuat: Sulhan Fuadi*/
/*Tanggal Pembuatan: 22 Februari 2024*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main () {
/* Kamus Lokal */
    float s1, s2, d1, d2, Luas, Kell;

/* Algoritma */
    printf("==== Menghitung Luas dan Keliling Layang-Layang ====\n");
    printf("sisi satu layang-layang dalam meter, s1: \n");
    scanf("%f", &s1);
    printf("sisi dua layang-layang dalam meter, s2: \n");
    scanf("%f", &s2);
    printf("diagonal satu layang-layang dalam meter, d1: \n");
    scanf("%f", &d1);
    printf("diagonal dua layang-layang dalam meter, d2: \n");
    scanf("%f", &d2);
    Luas = 0.5 * d1 * d2;
    Kell = 2 * (s1 + s2);
    printf("Hasil: \n Dengan sisi satu & dua layang-layang %.2f meter dan %.2f meter, \n serta diagonal satu & dua layang-layang %.2f meter dan %.2f meter, didapat \n Luas layang-layang sebesar %.2f meter persegi dan Keliling layang-layang sebesar %.2f meter", s1, s2, d1, d2, Luas, Kell);
    return 0;
}
