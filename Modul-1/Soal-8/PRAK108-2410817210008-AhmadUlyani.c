#include <stdio.h>
#define pi 3.14

int main ()
{
    // jarak dalam kilometer
    int jaraktotal = 14;
    int putaran = 5;
    float jarijari = jaraktotal / (putaran * 2 * pi);

    printf("Diketahui\n");
    printf("Pak Dengklek mengelilingi taman = %d Putaran\n",putaran);
    printf("Jarak tempuh Pak Dengklek = %d Kilometer\n",jaraktotal);
    printf("\n");
    printf("Jawaban \n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer", jarijari);

    return 0;
}