#include <stdio.h>
void biodata(int tahunLahir, char nama[], char asal[]){
    int tahun_sekarang = 2020;
    int umur = tahun_sekarang - tahunLahir;
    printf("\n");
    printf("Perkenalkan Nama Saya : %s\n", nama);
    printf("Umur Saya : %d\n", umur);
    printf("Saya Adalah Angkatan : %d\n", tahun_sekarang);
    printf("Asal Saya Dari : %s\n", asal);
}

int main() {
    int tahunLahir;
    char nama[20], asal[15];
    scanf("%d",&tahunLahir);
    scanf("%s",&nama);
    scanf("%s",&asal);
    biodata(tahunLahir, nama, asal);
    return 0;
}