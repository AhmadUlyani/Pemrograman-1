#include <stdio.h>

int main (){
    float jarijari, tinggi, volume, luas, keliling;
    scanf("%f %f", &jarijari, &tinggi);
    volume = 22.0/7.0 * jarijari * jarijari * tinggi;
    luas = 2 * 22.0/7.0 * jarijari * (jarijari + tinggi);
    keliling = 2 * 22.0/7.0 * jarijari;

    printf("Volume = %.2f\n", volume);
    printf("Luas = %.2f\n", luas);
    printf("Keliling = %.2f\n", keliling);

    printf("\n");
    scanf("%f %f", &jarijari, &tinggi);
    volume = 22.0/7.0 * jarijari * jarijari * tinggi;
    luas = 2 * 22.0/7.0 * jarijari * (jarijari + tinggi);
    keliling = 2 * 22.0/7.0 * jarijari;
    printf("Volume = %.2f\n", volume);
    printf("Luas = %.2f\n", luas);
    printf("Keliling = %.2f\n", keliling);

    return 0;
}