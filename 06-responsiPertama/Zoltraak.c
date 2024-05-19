/*Pembuat: Sulhan Fuadi - 24060123130115*/
/*Tanggal Pembuatan: 27 Maret 2024*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

        int frieren[1000], himmel[1000];
    int frieren_count = 0, himmel_count = 0;

    for (int i = 0; i < n; i++) {
        int power;
        scanf("%d", &power);

        if (power % 5 == 0 && power <= 150 && power > 0) {
            frieren[frieren_count++] = power;
        }

        int is_prime = 1;
        if (power <= 1) is_prime = 0;
        else if (power <= 3) is_prime = 1;
        else if (power % 2 == 0 || power % 3 == 0) is_prime = 0;
        else {
            for (int i = 5; i * i <= power; i = i + 6) {
                if (power % i == 0 || power % (i + 2) == 0) {
                    is_prime = 0;
                    break;
                }
            }
        }

        if (is_prime && power <= 100) {
            himmel[himmel_count++] = power;
        }
    }

    printf("Frieren: ");
    for (int i = 0; i < frieren_count; i++) {
        printf("%d ", frieren[i]);
    }
    printf("\n");

    printf("Himmel: ");
    for (int i = 0; i < himmel_count; i++) {
        printf("%d ", himmel[i]);
    }
    printf("\n");

    if (frieren_count > himmel_count) {
        printf("Frieren menang!\n");
    } else if (himmel_count > frieren_count) {
        printf("Himmel menang!\n");
    } else {
        printf("Seri!\n");
    }

    return 0;
}