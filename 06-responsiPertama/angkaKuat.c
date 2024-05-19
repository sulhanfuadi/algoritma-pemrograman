/*Pembuat: Sulhan Fuadi - 24060123130115*/
/*Tanggal Pembuatan: 27 Maret 2024*/

#include <stdio.h>

int main() {
    int n, temp, digit, sum;
    scanf("%d", &n);

    temp = n;
    sum = 0;
    while(temp > 0) {
        digit = temp % 10;
        int fact = 1;
        for(int i = 1; i <= digit; i++) {
            fact *= i;
        }
        sum += fact;
        temp /= 10;
    }

    if(sum == n) {
        printf("KUAT");
    } else {
        printf("lemah");
    }

    return 0;
}
