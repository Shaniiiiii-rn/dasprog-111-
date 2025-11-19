#include <stdio.h>
#include <stdlib.h>
#include "tampilanMenu.h"
#include "Kalkulator_Resistor_Seri.h"
#include "Kalkulator_Konversi_Desimal.h"
#include "project_kalkulator_dan_konversi.h"
#include "kalkulator_daya_final.h"
#include "konversi_oktal_ke_desimal.h"


int main(){
    int pilihan;
    int nomor;
    int desimal;
    int biner[32], Oktal[32];

    while (1){
        system("cls");
        tampilan_Menu();
        scanf("%d", &pilihan);
        system("cls");

        if(pilihan == 1){
            menuHitungTegangan();
            printf("\nTekan ENTER untuk lanjut.");
            getchar(); getchar();
        }

        else if(pilihan == 2){
            KalkulatorDaya();
            printf("\n\nTekan ENTER untuk lanjut.");
            getchar(); getchar();
        }

        else if(pilihan == 3){
            kalkulatorResistorSeri(nomor);
            printf("\n\nTekan ENTER untuk lanjut.");
            getchar(); getchar();

        }
        else if (pilihan == 5){
            printf("===SELAMAT DATANG DI KALKULATOR KONVERSI DeBOH (Desimal ke Biner, Oktal, dan Heksadesimal)===\n\n");
            printf("Masukkan nilai desimal: ");
            scanf("%d", &desimal);
            printf("\nHasil Konversi: \n");
            desimalKeBiner(desimal, biner);
            desimalKeOktal(desimal, Oktal);
            printf("\nBilangan Heksadesimal: %X", desimal);
            printf("\n\nTekan ENTER untuk lanjut.");
            getchar(); getchar();
        }

        else if(pilihan == 6){
            menuBinerKeDesimal();
            printf("\nTekan ENTER untuk lanjut.");
            getchar(); getchar();
        }

        else if(pilihan == 7){
            KalkulatorOktal();
            printf("\n\nTekan ENTER untuk lanjut.");
            getchar(); getchar();

        }

        else if(pilihan == 9){break;}
        
        else {
            printf("\nGak Valid wak Ulangi! (Tekan tombol apa saja)\n\n");
            getchar(); getchar();
        }
    }

}