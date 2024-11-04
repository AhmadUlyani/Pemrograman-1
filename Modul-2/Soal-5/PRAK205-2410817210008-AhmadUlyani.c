#include <stdio.h>
#include <math.h>

int main (){
    int a, b, c, keliling, luas;
    scanf("%d %d", &a, &b);
    c = sqrt(b * b - a * a);
    printf("Alas = %d cm\n", c);
    printf("Tinggi = %d cm\n", a);
    keliling = a + b + c;
    printf("Keliling = %d cm\n", keliling);
    luas = a * c / 2;
    printf("Luas = %d cm^2\n", luas);

    printf("\n");
    scanf("%d %d", &a, &b);
    c = sqrt(b * b - a * a);
    printf("Alas = %d cm\n", c);
    printf("Tinggi = %d cm\n", a);
    keliling = a + b + c;
    printf("Keliling = %d cm\n", keliling);
    luas = a * c / 2;
    printf("Luas = %d cm^2\n", luas);

    return 0;
}