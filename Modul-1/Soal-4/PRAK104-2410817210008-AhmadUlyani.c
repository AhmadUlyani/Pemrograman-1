#include <stdio.h>

int main()
{
    int A = 400000;
    int B = 350000;
    float diskonA = 0.13*A;
    float hargasetelahdiskonA = A - diskonA;
    float diskonB = 0.21*B;
    float hargasetelahdiskonB = B - diskonB;

    printf("Harga sepatu A adalah %d\n", A);
    printf("Harga sepatu B adalah %d\n", B);
    printf("Sepatu A mendapatkan diskon 13%% sehingga harganya menjadi %.0f\n", hargasetelahdiskonA);
    printf("Sepatu B mendapatkan diskon 21%% sehingga harganya menjadi %.0f\n", hargasetelahdiskonB);

    return 0;
}