#include <stdio.h>

int main()
{
    int jumlahpasukan = 958730;
    int jumlahpahlawan = 5; // Zilong, ling, Baxia, Wanwan, dan change
    int pasukanperpahlawan = jumlahpasukan / jumlahpahlawan;

    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n", jumlahpasukan);
    printf("Jumlah pahlawan = %d\n", jumlahpahlawan);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan", pasukanperpahlawan);

    return 0;
}