/*Pembuat: Sulhan Fuadi - 24060123130115*/
/*Tanggal Pembuatan: 27 Maret 2024*/

#include <stdio.h>

int main() {
    int i, j, n, x, index;

    scanf("%d %d", &n, &x);

    int arr[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int new_arr[n];
    index = 0;
    for(i = 0; i < x; i++) {
        for(j = i; j < n; j += x) {
            new_arr[index++] = arr[j];
        }
    }

    for(i = 0; i < n; i++) {
        printf("%d ", new_arr[i]);
    }

    return 0;
}