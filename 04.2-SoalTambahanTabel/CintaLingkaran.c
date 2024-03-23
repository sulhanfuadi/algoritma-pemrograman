/*Nama File: CintaLingkaran.c*/
/*Pembuat: Sulhan Fuadi - 24060123130115*/
/*Tanggal Pembuatan: 17 Maret 2024*/
/*Deskripsi: 
Aoi Hinami merupakan seorang pengamat sosialita yang sangat antusias di sekolahnya.
Hinami melihat kasus yang sangat digemari, yaitu kasus percintaan. Hinami memetakan
orang dengan indeks ke-i menyukai orang dengan indeks ke-j. Dan ternyata kasus tersebut
sangatlah menarik, dimana satu orang hanya disukai oleh maksimal satu orang. Maka array
tersebut dijamin membentuk sebuah permutasi. Perhatikan bahwa bisa saja terdapat orang
yang tidak menyukai siapapun (menyukai diri sendiri). Kamu diminta oleh Hinami untuk
mencari pola cinta lingkaran yang terjadi pada sekolah.*/
/*Note: Code ini dibuat dengan bantuan AI: Gemini, Poe, dan Copilot*/

#include <stdio.h>

int main() {
    /* Kamus Lokal */
    int n, i, j, cycle_size, current_person, foundCircle;

    /* Algoritma */
    printf("==================== Sirkel Cinta ====================\n");
    printf("Masukkan jumlah orang: ");
    scanf("%d", &n);

    int likes[n], visited[n], cycle[n];
    for (i = 0; i < n; i++) {
        visited[i] = 0;
    }

    printf("Masukkan indeks orang yang disukai (pisahkan dengan spasi, seperti 4 10 7 8 3 5 6 9 2 1): \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &likes[i]);
        likes[i]--;
    }

    printf("Pola cinta lingkaran: \n");
    for (i = 0; i < n; i++) {
        if (!visited[i]) {
            cycle_size = 0;
            current_person = i;
            foundCircle = 0;

            while (!visited[current_person]) {
                visited[current_person] = 1;
                cycle[cycle_size++] = current_person;
                current_person = likes[current_person];
            }

            if (current_person == i && !foundCircle) {
                for (j = 0; j < cycle_size; j++) {
                    printf("%d ", cycle[j] + 1);
                }
                printf("\n");
                foundCircle = 1;
            }
        }
    }

    return 0;
}
