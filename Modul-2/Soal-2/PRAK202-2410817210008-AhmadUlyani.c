#include <stdio.h>

int main(){
    printf("Case 1 \n");
    float nilai1, nilai2, jumlah;
    printf("Masukkan Nilai Pertama : ");
    scanf("%f", &nilai1);
    printf("Masukkan Nilai Kedua : ");
    scanf("%f", &nilai2);
    jumlah = nilai1 + nilai2;
    printf("Output :\n");
    printf("Hasil dari penjumlahan nilai pertama \"%.0f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"\n", nilai1, nilai2, jumlah);

    printf("\n");
    printf("Case 2\n");
    printf("Masukkan Nilai Pertama : ");
    scanf("%f", &nilai1);
    printf("Masukkan Nilai Kedua : ");
    scanf("%f", &nilai2);
    jumlah = nilai1 + nilai2;
    printf("Output :\n");
    printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"\n", nilai1, nilai2, jumlah);

    return 0;
}