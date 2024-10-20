#include <stdio.h>

int main ()
{
    // Panjang dalam meter
    int sisi1 = 4; 
    int sisi2 = 5;
    int sisi3 = 7;
    int keliling = sisi1 + sisi2 + sisi3;
    int hargapermeter = 85000;
    int totalbiaya = keliling * hargapermeter;

    printf("Diketahui :\n");
    printf("Panjang segitiga berturut-turut adalah %d, %d, dan %d\n", sisi1, sisi2, sisi3);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", keliling);
    printf("Harga tanah per meter adalah %d\n", hargapermeter);
    printf("Jawaban\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d", totalbiaya);


    return 0;
}