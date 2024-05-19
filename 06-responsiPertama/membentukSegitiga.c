#include <stdio.h>

int area(int x1, int y1, int x2, int y2, int x3, int y3) {
    return x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2);
}

int main() {
    int n;
    scanf("%d", &n);
    int x[n], y[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            for (int k = j+1; k < n; k++) {
                if (area(x[i], y[i], x[j], y[j], x[k], y[k]) != 0) {
                    printf("%d %d %d\n", i+1, j+1, k+1);
                }
            }
        }
    }
    return 0;
}