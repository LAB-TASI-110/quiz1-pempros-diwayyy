#include <stdio.h>
#include <stdlib.h>

int main() {
    int pilihan, jenis;
    char nama[50];
    float berat, harga = 0, total, total_akhir;
    float diskon = 0, potongan;
    float total_harian = 0;
    int transaksi = 0;

    do {
        printf("\n=== SISTEM TRANSAKSI LAUNDRY DEL ===\n");
        printf("1. Tambah Transaksi\n");
        printf("2. Lihat Total Pemasukan Hari Ini\n");
        printf("3. Keluar\n");
        printf("Pilihan: ");
        scanf("%d", &pilihan);

        switch(pilihan) {

            case 1:
                printf("\nNama Pelanggan: ");
                scanf(" %[^\n]", nama);

                printf("Berat Laundry (kg): ");
                scanf("%f", &berat);

                printf("\nJenis Layanan:\n");
                printf("1. Cuci Biasa (7000/kg)\n");
                printf("2. Cuci + Setrika (10000/kg)\n");
                printf("3. Express (15000/kg)\n");
                printf("Pilih layanan: ");
                scanf("%d", &jenis);

                if(jenis == 1) {
                    harga = 7000;
                } else if(jenis == 2) {
                    harga = 10000;
                } else if(jenis == 3) {
                    harga = 15000;
                } else {
                    printf("Pilihan tidak valid!\n");
                    break;
                }

                // Hitung total awal
                total = berat * harga;

                // Cek diskon
                if(berat >= 10) {
                    diskon = 0.20;
                } else if(berat >= 5) {
                    diskon = 0.10;
                } else {
                    diskon = 0;
                }

                potongan = total * diskon;
                total_akhir = total - potongan;

                total_harian += total_akhir;
                transaksi++;

                printf("\n--- STRUK TRANSAKSI ---\n");
                printf("Nama           : %s\n", nama);
                printf("Berat          : %.2f kg\n", berat);
                printf("Total Awal     : Rp %.0f\n", total);
                printf("Diskon         : %.0f%%\n", diskon * 100);
                printf("Potongan       : Rp %.0f\n", potongan);
                printf("Total Bayar    : Rp %.0f\n", total_akhir);
                printf("-----------------------\n");

                break;

            case 2:
                printf("\n=== LAPORAN HARIAN ===\n");
                printf("Jumlah Transaksi : %d\n", transaksi);
                printf("Total Pemasukan  : Rp %.0f\n", total_harian);
                break;

            case 3:
                printf("Terima kasih telah menggunakan sistem.\n");
                break;

            default:
                printf("Pilihan tidak tersedia!\n");
        }

    } while(pilihan != 3);

    return 0;
}