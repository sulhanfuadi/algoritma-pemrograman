#include <stdio.h>
#include <stdlib.h>

int isPrime(int num) {
    if (num <= 1) return 0;
    if (num == 2) return 1;
    if (num % 2 == 0) return 0;
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int N, i, F, H;

    scanf("%d", &N);

    int T[N];

    for (i = 0; i < N; i++) {
        scanf("%d", &T[i]);
    }

    F = 0;
    printf("Frieren:");
    for (i = 0; i < N; i++) {
        if (T[i] >= 150) {
            break;
        } else if (T[i] % 5 == 0 && T[i] != 0) {
            F++;
            printf(" %d", T[i]);
        }
    }
    printf("\n");

    H = 0;
    printf("Himmel:");
    for (i = 0; i < N; i++) {
        if (T[i] >= 100) {
            break;
        }
        if (isPrime(T[i]) && T[i] != 5) {
            H++;
            printf(" %d", T[i]);
        }
    }
    printf("\n");

    if (F > H) {
        printf("Frieren menang!");
    } else if (F == H) {
        printf("Seri!");
    } else {
        printf("Himmel menang!");
    }

    return 0;
}