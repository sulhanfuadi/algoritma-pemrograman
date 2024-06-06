// Penjelajah Dungeon
// Sulhan Fuadi - 24060123130115
// Responsi Praktikum Algoritma Pemgrograman Lab E2 - 06 Juni 2024

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j;
    int n, k;
    int petakGelap;
    int dungeon[1000] = {0};
    int menyalaAbangkuh[1000] = {0};

    scanf("%d %d", &n, &k);
    
    for (i = 0; i < n; i++) {
        scanf("%d", &dungeon[i]);
    }

    petakGelap = 0;
    for (i = 0; i < n; i++) {
        if (dungeon[i] == 1) {
            for (j = i - k; j <= i + k; j++) {
                if (j >= 0 && j < n) {
                    menyalaAbangkuh[j] = 1;
                }
            }
        }
    }

    for (i = 0; i < n; i++) {
        if (menyalaAbangkuh[i] == 0) {
            petakGelap++;
        }
    }

    printf("%d\n", petakGelap);

    return 0;
}
