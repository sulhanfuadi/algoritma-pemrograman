/*Pembuat: Sulhan Fuadi - 24060123130115*/
/*Tanggal Pembuatan: 27 Maret 2024*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, n, x;
    scanf("%d", &n);
    scanf("%d", &x);

    int arr[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int flag = 0;
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == x) {
                printf("%d dan %d\n", arr[i], arr[j]);
                flag = 1;
            }
        }
    }

    if(flag == 0) {
        printf("Tidak ada output\n");
    }

    return 0;
}