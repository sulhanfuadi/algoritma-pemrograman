        #include <stdio.h>
        #include <stdlib.h>

        int isPrima(int n) {
            if (n <= 1) {
                return 0;
            }
            if (n == 2) {
                return 1;
            }
            if (n % 2 == 0) {
                return 0;
            }
            for (int i = 3; i * i <= n; i += 2) {
                if (n % i == 0) {
                    return 0;
                }
            }
            return 1;
        }

        int main() {
            int n, i, power;

            scanf("%d", &n);

            int frieren[1000], himmel[1000];
            int frieren_count = 0, himmel_count = 0;

            for (i = 0; i < n; i++) {
                scanf("%d", &power);

                if (power % 5 == 0 && power <= 150 && power > 0 && !isPrima(power)) {
                    frieren[frieren_count++] = power;
                }
                else if (power % 5 != 0 && isPrima(power) && power <= 100 && power > 0) {
                    himmel[himmel_count++] = power;
                }
            }

            if (frieren_count > 0) {
                printf("Frieren: ");
                for (i = 0; i < frieren_count; i++) {
                    printf("%d ", frieren[i]);
                }
                printf("\n");
            }

            if (himmel_count > 0) {
                printf("Himmel: ");
                for (i = 0; i < himmel_count; i++) {
                    printf("%d ", himmel[i]);
                }
                printf("\n");
            }

            if (frieren_count > himmel_count) {
                printf("Frieren menang!\n");
            } else if (himmel_count > frieren_count) {
                printf("Himmel menang!\n");
            } else if (frieren_count > 0 || himmel_count > 0) {
                printf("Seri!\n");
            }

            return 0;
        }