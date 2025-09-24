#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
    long long angka_desimal;
    char biner[65], oktal[23], heksadesimal[17];
    
    printf("----Kalkulator Konversi Sistem Bilangan Desimal ke Sistem Bilangan Biner/Oktal/Desimal---\n");
    printf("Masukkan angka desimal: ");
    scanf("%d", &angka_desimal);
    itoa(angka_desimal, biner, 2);
    printf("Konversi ke Sistem Bilangan:\n");
    printf("Bilangan Biner: %s\n", biner);

    itoa(angka_desimal, oktal, 8);
    printf("Bilangan Oktal: %s\n", oktal);

    itoa(angka_desimal, heksadesimal, 16);
    printf("Bilangan Heksadesimal: %s\n", heksadesimal);
    return 0;
}