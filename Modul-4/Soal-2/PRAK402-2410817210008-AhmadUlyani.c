#include <stdio.h>

void hitung_ganjil_genap(int n) {
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) { // Jika ganjil
            printf("%d ", i);
        }
    }
    printf("\n");

    for (int i = n; i >= 2; i--) {
        if (i % 2 == 0) { // Jika genap
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    hitung_ganjil_genap(n);

    return 0;
}