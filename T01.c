#include <stdio.h>
#include <string.h>

int main() {
    
    char kode[10];
    int porsi;
    int harga, total, totalBayar = 0;

    printf("Masukkan pesanan (ketik END untuk selesai)\n");

    printf("\nMenu\t\tPorsi\tHarga\tTotal\n");
    printf("=============================================\n");

    while (1) {

        printf("Kode Menu: ");
        scanf("%s", kode);

        if (strcmp(kode, "END") == 0) {
            break;
        }

        printf("Porsi: ");
        scanf("%d", &porsi);

        if (strcmp(kode, "NGS") == 0) {
            harga = 15000;
            printf("Nasi Goreng Spesial\t%d\t%d\t%d\n", 
                   porsi, harga, porsi * harga);
        }
        else if (strcmp(kode, "AP") == 0) {
            harga = 20000;
            printf("Ayam Penyet\t\t%d\t%d\t%d\n", 
                   porsi, harga, porsi * harga);
        }
        else if (strcmp(kode, "SA") == 0) {
            harga = 25000;
            printf("Sate Ayam\t\t%d\t%d\t%d\n", 
                   porsi, harga, porsi * harga);
        }
        else if (strcmp(kode, "BU") == 0) {
            harga = 18000;
            printf("Bakso Urat\t\t%d\t%d\t%d\n", 
                   porsi, harga, porsi * harga);
        }
        else if (strcmp(kode, "MAP") == 0) {
            harga = 15000;
            printf("Mie Ayam Pangsit\t%d\t%d\t%d\n", 
                   porsi, harga, porsi * harga);
        }
        else if (strcmp(kode, "GG") == 0) {
            harga = 15000;
            printf("Gado-Gado\t\t%d\t%d\t%d\n", 
                   porsi, harga, porsi * harga);
        }
        else if (strcmp(kode, "SAM") == 0) {
            harga = 17000;
            printf("Soto Ayam\t\t%d\t%d\t%d\n", 
                   porsi, harga, porsi * harga);
        }
        else if (strcmp(kode, "RD") == 0) {
            harga = 25000;
            printf("Rendang Daging\t\t%d\t%d\t%d\n", 
                   porsi, harga, porsi * harga);
        }
        else if (strcmp(kode, "IB") == 0) {
            harga = 35000;
            printf("Ikan Bakar\t\t%d\t%d\t%d\n", 
                   porsi, harga, porsi * harga);
        }
        else if (strcmp(kode, "NUK") == 0) {
            harga = 20000;
            printf("Nasi Uduk Komplit\t%d\t%d\t%d\n", 
                   porsi, harga, porsi * harga);
        }
        else {
            printf("Kode tidak ditemukan!\n");
            continue;
        }

        total = porsi * harga;
        totalBayar += total;
    }

    printf("=============================================\n");
    printf("Total Pembayaran: %d\n", totalBayar);

    return 0;
}