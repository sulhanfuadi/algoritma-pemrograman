/*Nama File: TradingCrypto.c*/
/*Pembuat: Sulhan Fuadi - 24060123130115*/
/*Tanggal Pembuatan: 17 Maret 2024*/
/*Deskripsi: 
Yuki merupakan seorang trader crypto yang sangat terkenal. Ternyata, Yuki mampu
melakukan prediksi harga-harga crypto di masa yang akan datang dengan kemampuannya.
Kamu yang baru memasuki dunia crypto pun ingin mendapatkan keuntungan dengan
mengikuti jejak Yuki. Baiknya, Yuki memberitahumu prediksi harga crypto untuk n hari ke
depannya. Dengan kemampuan terbatas, kamu berusaha untuk melakukan transaksi
seminimal mungkin, sehingga hanya melakukan transaksi pembelian sekali dan penjualan
sekali. Untuk mendapatkan hasil yang maksimal, kamu membuat program untuk mencetak di
hari apa kamu harus membeli dan di hari apa kamu harus menjual. Kamu harus membeli
terlebih dahulu sebelum menjual. Terdapat kemungkinan juga bahwa harga crypto terus turun
atau stagnan, sehingga kamu tidak melakukan transaksi.*/
/*Note: Code ini dibuat dengan bantuan AI Copilot*/

#include <stdio.h>

int main() {
    /* Kamus Lokal */
    int n, i, j, hari_beli, hari_jual, max_keuntungan, keuntungan;

    /* Algoritma */
    printf("==================== Dukun Trading Crypto ====================\n");
    printf("Masukkan jumlah hari: ");
    scanf("%d", &n);

    printf("Masukkan harga untuk setiap hari: \n");
    int harga[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &harga[i]);
    }

    max_keuntungan = 0;
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            keuntungan = harga[j] - harga[i];
            if(keuntungan > max_keuntungan) {
                max_keuntungan = keuntungan;
                hari_beli = i + 1;
                hari_jual = j + 1;
            }
        }
    }

    if(max_keuntungan > 0) {
        printf("Beli di hari ke-%d dan jual di hari ke-%d dengan keuntungan sebesar %d\n", hari_beli, hari_jual, max_keuntungan);
    } else {
        printf("Tidak bisa mendapatkan keuntungan :(\n");
    }

    return 0;
}
