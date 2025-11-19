#include <stdio.h>
#include <math.h>
#include <string.h>

int desimalKeBiner(int desimal, int biner[32]){
    int i = 0;
    while(desimal > 0){
        biner[i] = desimal % 2;
        desimal /= 2;
        i++;
    }
    printf("Bilangan Biner: ");
    for(int j = i - 1; j >= 0; j--){
        printf("%d", biner[j]);
    }
}

int desimalKeOktal(int desimal, int Oktal[32]){
    int i = 0;
    while(desimal > 0){
        Oktal[i] = desimal % 8;
        desimal /= 8;
        i++;
    }
    printf("\nBilangan Oktal: ");
    for (int j = i - 1; j >= 0; j--){
        printf("%d", Oktal[j]);
    }

}

/*int main(){
    int desimal;
    int biner[32], Oktal[32];
    printf("===SELAMAT DATANG DI KALKULATOR KONVERSI DeBOH (Desimal ke Biner, Oktal, dan Heksadesimal)===\n\n");
    printf("Masukkan nilai desimal: ");
    scanf("%d", &desimal);
    printf("\nHasil Konversi: \n");
    desimalKeBiner(desimal, biner);
    desimalKeOktal(desimal, Oktal);
    printf("\nBilangan Heksadesimal: %X", desimal);
    printf("\n\nTekan ENTER untuk lanjut.");
    getchar(); getchar();

    return 0;

}*/
