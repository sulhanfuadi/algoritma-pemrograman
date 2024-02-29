/*Nama File: jarakGLBB.c*/
/*Deskripsi: menghitung dan menampilkan jarak yang ditempuh benda yang mengalami gerak lurus berubah beraturan dan menampilkan*/
/*Pembuat: Sulhan Fuadi*/
/*Tanggal Pembuatan: 22 Februari 2024*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main () {
/* Kamus Lokal */
    float v0, t, a, S;

/* Algoritma */
    printf("==================== Menghitung jarak GLBB ====================\n");
    printf("Masukkan nilai kecepatan awal dalam meter per detik, v0: \n");
    scanf("%f", &v0);
    printf("Masukkan nilai waktu dalam detik, t: \n");
    scanf("%f", &t);
    printf("Masukkan nilai percepatan dalam meter per detik kuadrat, a: \n");
    scanf("%f", &a);
    S = v0 * t + 0.5 * (a * pow(t, 2));
    printf("Hasil: \n Jarak yang ditempuh benda yang mengalami gerak lurus berubah beraturan \n dengan kecepatan awal %.2f m/s, dalam waktu %.2f s, dan percepatan %.2f m/s^2 \n adalah %.2f meter \n", v0, t, a, S);
    return 0;
}
