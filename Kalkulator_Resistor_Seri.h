#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int kalkulatorResistorSeri (int nomor){

    int resistor_ekivalen = 0;
    printf("---Kalkulator Resistor Seri---\n");
    printf("\nMasukkan berapa resistor yang ada dalam rangkaian seri: ");
    scanf("%d", &nomor);

    for (int i = 1; i <= nomor; i++){
        int resistor;
        printf("Resitor ke-%d (dalam Ohm): ", i);
        scanf("%d", &resistor);
        resistor_ekivalen += resistor;

    }
    printf("\nJadi, nilai dari resistor ekivalennya adalah: %d ", resistor_ekivalen);
    printf("Ohm");
    /*printf("\nTekan ENTER untuk lanjut.");
    getchar(); getchar();*/

}
