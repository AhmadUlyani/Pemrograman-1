#include <stdio.h>
#include <math.h>

int main ()
{
    // Panjang dalam sentimeter
    int alas = 5;
    int tinggi = 12;
    int sisimiring = sqrt(alas * alas + tinggi * tinggi);
    int keliling = alas + tinggi + sisimiring;
    int luas = (alas * tinggi) / 2;

    printf("Diketahui :\n");
    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n", tinggi);
    printf("\nJawab :\n");
    printf("Sisi A = %d cm\n", tinggi);
    printf("Sisi B = %d cm\n", sisimiring);
    printf("Sisi C = %d cm\n", alas);
    printf("Keliling = %d cm\n", keliling);
    printf("Luas = %d cm\n", luas);

    return 0;
}