#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int KonversiOD(int oktal){
    int desimal=0;
    int pangkat=0;
    int temp=oktal;

    while (temp>0){
        int digit = temp % 10;
        if (digit<0||digit>7){
            return -1;
        }
        temp /= 10;
    }
    temp=oktal;

    while (temp>0){
        int digit = temp % 10;
        desimal += digit * pow(8, pangkat);
        pangkat++;
        temp/=10;
    }

    return desimal;
}

void KalkulatorOktal(){
    int oktal;
    int hasil;
    int pilihan;

    while(1){
        system("cls");

        printf("********KONVERSI OKTAL KE DESIMAL********");
        printf("\nMasukkan bilangan oktal:");
        scanf("%d", &oktal);

        hasil=KonversiOD(oktal);

        if (hasil==-1){
            printf("\nERROR: Bilangan harus (0-7)");
        }
        else{
            printf("\nDesimal: %d", hasil);
        }
        printf("\n1. Hitung lagi");
        printf("\n2. Kembali ke lobi");
        printf("\nPilih");
        scanf("%d", &pilihan);

        if (pilihan==1){
            continue;
        }
        else if (pilihan==2){
            break;
        }
            else{
            printf("tidak ada di pilihan");
            system("pause");
        }
    }
}


int main()
{
   KalkulatorOktal();

   printf("\nkembali ke lobi\n");
   return 0;
}
