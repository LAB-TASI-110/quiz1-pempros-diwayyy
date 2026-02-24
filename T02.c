#include <stdio.h>

int main() {
    int N, kelompok;
    int nilai[100];
    int total = 0;

    printf("Masukkan jumlah data: ");
    scanf("%d", &N);

    printf("Masukkan %d nilai:\n", N);
    for(int i = 0; i < N; i++) {
        scanf("%d", &nilai[i]);
    }

    printf("Masukkan kode kelompok (1/2): ");
    scanf("%d", &kelompok);

    for(int i = 0; i < N; i++) {
        if(kelompok == 1 && i % 2 == 0) {
            total += nilai[i];
        }
        else if(kelompok == 2 && i % 2 == 1) {
            total += nilai[i];
        }
    }

    printf("Total nilai kelompok %d = %d\n", kelompok, total);

    return 0;
    
}