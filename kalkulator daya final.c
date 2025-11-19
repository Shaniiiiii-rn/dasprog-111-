#include <stdio.h>
#include <stdlib.h>

void KalkulatorDaya(){
    float P, V, I;
    int pilihan;

    for(;;){
        system ("cls");

        printf("==========KALKULATOR DAYA LISTRIK==========\n\n");
        printf("masukkan tegangan (V) dalam volt: ");
        scanf("%f", &V);

        printf("masukkan arus listrik (I) dalam ampere: ");
        scanf("%f", &I);

        P=V*I;

        printf("\nDaya (P) = %.2f Watt", P);

        printf("\n1. Hitung lagi\n");
        printf("2. Kembali ke Lobi\n");
        printf("Pilihan: ");
        scanf("%d", &pilihan);

        if(pilihan==1){
                continue;
        }
        else if(pilihan==2){
                break;
        }
        else{
                printf("\nKode tidak valid");
        }

    }

    return;
}


int main(){
   KalkulatorDaya();

   printf("\nKembali ke lobi...\n");

   return 0;
}
