/*Pembuat: Sulhan Fuadi - 24060123130115*/
/*Tanggal Pembuatan: 27 Maret 2024*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int *arr = (int*) malloc(n * sizeof(int));
    int *odd = (int*) malloc(n * sizeof(int));
    int *even = (int*) malloc(n * sizeof(int));
    int oddCount = 0, evenCount = 0;

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0) {
            even[evenCount++] = arr[i];
        } else {
            odd[oddCount++] = arr[i];
        }
    }

    for(int i = 0; i < oddCount; i++) {
        printf("%d ", odd[i]);
    }
    for(int i = 0; i < evenCount; i++) {
        printf("%d ", even[i]);
    }

    free(arr);
    free(odd);
    free(even);

    return 0;
}