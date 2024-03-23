/*Nama File: PesananKafe.c*/
/*Deskripsi: Program sistem pemesanan sederhana yang memungkinkan pengguna untuk menambah, melayani, dan menghitung pesanan.*/
/*Pembuat: Sulhan Fuadi - 24060123130115*/
/*Tanggal Pembuatan: 17 Maret 2024*/
/*Note: Code ini dibuat dengan bantuan AI Copilot*/

#include <stdio.h>

int main() {
    /* Kamus Lokal */
    char orders[15][11];
    int orderCount = 0;
    int queryType;
    char name[11];
    int queries;
    int i, k, l, j;

    /* Algoritma */
    printf("==================== Sistem Pesanan Kafe Maut ====================\n");
    printf("Silakan masukkan jumlah query: \n");
    scanf("%d", &queries);

    printf("Silakan pilih tipe query (1: Tambah Pesanan, 2: Layani Pesanan, 3: Hitung Pesanan): \n ");
    for(i = 0; i < queries; i++) {
        scanf("%d", &queryType);
        switch(queryType) {
            case 1:
                scanf("%s", name);
                if(orderCount < 15) {
                    j = 0;
                    while(name[j] != '\0' && j < 10) {
                        orders[orderCount][j] = name[j];
                        j++;
                    }
                    orders[orderCount][j] = '\0';
                    orderCount++;
                    printf("Pesanan atas nama %s telah ditambahkan. \n", name);
                } else {
                    printf("Maaf, kami sudah tidak mampu menampung pesanan lagi :( \n");
                }
                break;
            case 2:
                if(orderCount > 0) {
                    printf("Pesanan atas nama %s sudah selesai! ^^ \n", orders[0]);
                    for(k = 0; k < orderCount - 1; k++) {
                        l = 0;
                        while(orders[k+1][l] != '\0' && l < 10) {
                            orders[k][l] = orders[k+1][l];
                            l++;
                        }
                        orders[k][l] = '\0';
                    }
                    orderCount--;
                } else {
                    printf("Tidak terdapat pesanan OwO \n");
                }
                break;
            case 3:
                if(orderCount > 0) {
                    printf("Ayo semangat, masih terdapat %d pesanan yang harus dikerjakan! \n", orderCount);
                } else {
                    printf("Kerja bagus, sudah tidak ada pesanan! \n");
                }
                break;
            default:
                printf("Query tidak valid. \n");
        }
    }

    return 0;
}
