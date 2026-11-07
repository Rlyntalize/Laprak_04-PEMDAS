#include <stdio.h>

int main() {
    int pilihan;
    double a, b, hasil;

    while (1) {
        printf("Pilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");

        printf("Masukkan Pilihan : ");
        scanf("%d", &pilihan);

        if (pilihan == 5) {
            printf("Terimakasih, telah menggunakan kalkulator Jihan\n");
            break;
        }
        else if (pilihan >= 1 && pilihan <= 4) {
            printf("Masukkan nilai pertama : ");
            scanf("%lf", &a);

            printf("Masukkan nilai kedua : ");
            scanf("%lf", &b);

            if (pilihan == 1) {
                hasil = a + b;
                printf("Hasil Penjumlahan antara %.2f dengan %.2f adalah %.2f\n", a, b, hasil);
            }
            else if (pilihan == 2) {
                hasil = a - b;
                printf("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f\n", a, b, hasil);
            }
            else if (pilihan == 3) {
                hasil = a * b;
                printf("Hasil Perkalian antara %.2f dengan %.2f adalah %.2f\n", a, b, hasil);
            }
            else {
                hasil = a / b;
                printf("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f\n", a, b, hasil);
            }
        }
        else {
            printf("Input anda salah, silahkan coba lagi\n");
        }
    }

    return 0;
}