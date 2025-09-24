#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
    int n, i;
    float total_resistance = 0.0, resistance;

    printf("Masukkan jumlah resistor yang disusun seri: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Masukkan nilai resistor ke-%d (dalam ohm): ", i + 1);
        scanf("%f", &resistance);
        total_resistance += resistance;
    }

    printf("Total resistansi dari %d resistor yang disusun seri adalah: %.2f ohm\n", n, total_resistance);

    return 0;
}