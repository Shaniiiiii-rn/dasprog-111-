#include <stdio.h>
#include <string.h>
#include <math.h>

void ResistorParalel() {
    int n;
    double R, totalKebalikan = 0.0;

    printf("\n--- Kalkulator Resistor Paralel ---\n");
    printf("Masukkan jumlah resistor: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        printf("Masukkan nilai Resistor %d (Ohm): ", i);
        scanf("%lf", &R);

        totalKebalikan += 1.0 / R;
    }

    double Rtotal = 1.0 / totalKebalikan;

    printf("Total Hambatan Paralel adalah: %.2lf Ohm\n", Rtotal);
    printf("Tekan enter untuk kembali ke menu utama...");
    getchar(); getchar();
}
void hexKeDesimal() {
    char hex[20];
    int total;
    long long desimal = 0;

    printf("\n--- Konversi Heksadesimal ke Desimal ---\n");
    printf("Masukkan bilangan heksadesimal: ");
    scanf("%s", hex);

    total = strlen(hex);

    for (int i = 0; i < total; i++) {
        char c = hex[total - 1 - i];
        int nilai;

        if (c >= '0' && c <= '9')
            nilai = c - '0';
        else if (c >= 'A' && c <= 'F')
            nilai = c - 'A' + 10;
        else if (c >= 'a' && c <= 'f')
            nilai = c - 'a' + 10;
        else {
            printf("Input tidak valid!\n");
            return;
        }

        desimal += nilai * pow(16, i);
    }

    printf("Hasil Desimal: %lld\n", desimal);
    printf("Tekan enter untuk kembali ke menu utama...");
    getchar(); getchar();
}
