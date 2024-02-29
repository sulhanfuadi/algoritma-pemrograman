/*Nama File: jarakPBola.c*/
/*Deskripsi: menghitung dan menampilkan jarak yang ditempuh benda yang mengalami gerak parabola*/
/*Pembuat: Sulhan Fuadi*/
/*Tanggal Pembuatan: 22 Februari 2024*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main () {
/* Kamus Lokal */
    float v0, t, y;
    const float g = 9.8;

/* Algoritma */
    printf("==================== Menghitung jarak Parabola ====================\n");
    printf("Masukkan nilai kecepatan awal dalam meter per detik, v0: \n");
    scanf("%f", &v0);
    printf("Masukkan nilai waktu dalam detik, t: \n");
    scanf("%f", &t);
    y = v0 * t + (0.5 * (g * pow(t, 2)));
    printf("Hasil: \n Jarak yang ditempuh benda yang mengalami gerak parabola \n dengan kecepatan awal %.2f m/s dalam waktu %.2f s, dengan gravitasi %.2f m/s^2 \n adalah %.2f meter \n", v0, t, g, y);
    return 0;
}
