#include <stdio.h>
#include <math.h>
#include <string.h>

float hitungTegangan(float I, float R) {
    return I * R; // Rumus V = I x R
}

// Fungsi konversi biner ke desimal
int binerKeDesimal(char biner[]) {
    int desimal = 0;
    int panjang = strlen(biner);

    for (int i = 0; i < panjang; i++) {
        if (biner[i] == '1') {
            desimal += pow(2, panjang - 1 - i);
        } else if (biner[i] != '0') {
            return -1;
        }
    }

    return desimal;
}
void tampilkanMenu() {
    printf("\n========================================\n");
    printf("     KALKULATOR LISTRIK & KONVERSI\n");
    printf("========================================\n");
    printf("1. Hitung Tegangan (V = I x R)\n");
    printf("2. Konversi Biner ke Desimal\n");
    printf("0. Keluar\n");
    printf("========================================\n");
    printf("Pilih menu: ");
}

void menuHitungTegangan() {
    float I, R, V;
    printf("\n--- HITUNG TEGANGAN ---\n");
    printf("Masukkan arus (I) dalam Ampere: ");
    scanf("%f", &I);
    printf("Masukkan hambatan (R) dalam Ohm: ");
    scanf("%f", &R);

    V = hitungTegangan(I, R);
    printf("Tegangan (V) = %.2f Volt\n", V);
}

void menuBinerKeDesimal() {
    char biner[64];
    printf("\n--- KONVERSI BINER KE DESIMAL ---\n");
    printf("Masukkan bilangan biner: ");
    scanf("%s", biner);

    int hasil = binerKeDesimal(biner);
    if (hasil >= 0) {
        printf("Hasil dalam desimal: %d\n", hasil);
    }
}

int main() {
    int pilihan;
    do {
        tampilkanMenu();
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                menuHitungTegangan();
                break;
            case 2:
                menuBinerKeDesimal();
                break;
            case 0:
                printf("\nTerima kasih telah menggunakan program ini!\n");
                break;
            default:
                printf("\n Pilihan tidak valid! Silakan coba lagi.\n");
        }

        if (pilihan != 0) {
            printf("\nTekan ENTER untuk kembali ke menu utama...");
            getchar(); 
            getchar(); 
        }
    } while (pilihan != 0);

    return 0;
}
