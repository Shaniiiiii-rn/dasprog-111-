#include <stdio.h>
#include <string.h>

float hitungTegangan(float I, float R) {
    return I * R; // V = I * R
}

int binerKeDesimal(char biner[]) {
    int desimal = 0;
    int panjang = strlen(biner);
    
    for (int i = 0; i < panjang; i++) {
        if (biner[i] == '1') {
            desimal += (1 << (panjang - 1 - i)); // Menggunakan bit shift untuk efisiensi
        } else if (biner[i] != '0') {
            return -1; // Input tidak valid
        }
    }
    return desimal;
}

void tampilkanMenu() {
    printf("\n========================================\n");
    printf("     KALKULATOR LISTRIK & KONVERSI\n");
    printf("========================================\n");
    printf("1. Hitung Tegangan (V = I x R)\n");
    printf("6. Konversi Biner ke Desimal\n");
    printf("0. Keluar\n");
    printf("========================================\n");
    printf("Pilih menu: ");
}

void menuHitungTegangan() {
    float I, R;
    printf("\n--- HITUNG TEGANGAN ---\n");
    printf("Masukkan arus (I) dalam Ampere: ");
    scanf("%f", &I);
    printf("Masukkan hambatan (R) dalam Ohm: ");
    scanf("%f", &R);
    
    float V = hitungTegangan(I, R);
    printf("Tegangan (V) = %.2f Volt\n", V);
}

void menuBinerKeDesimal() {
    char biner[64];
    printf("\n--- KONVERSI BINER KE DESIMAL ---\n");
    printf("Masukkan bilangan biner (hanya 0 dan 1): ");
    scanf("%s", biner);
    
    int hasil = binerKeDesimal(biner);
    if (hasil >= 0) {
        printf("Hasil dalam desimal: %d\n", hasil);
    } else {
        printf("Error: Input biner tidak valid! Hanya boleh 0 dan 1.\n");
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
            case 6:
                menuBinerKeDesimal();
                break;
            case 0:
                printf("\nTerima kasih telah menggunakan program ini!\n");
                break;
            default:
                printf("\nPilihan tidak valid! Silakan coba lagi.\n");
        }
        
        if (pilihan != 0) {
            printf("\nTekan ENTER untuk kembali ke menu utama...");
            while (getchar() != '\n'); // Membersihkan buffer input
        }
    } while (pilihan != 0);
    
    return 0;
}
