#include <stdio.h>

void hitung(int n1, int n2) {
    if (n1 != n2) {
        printf("Jumlah tidak sama\n");
        return;
    }
    int baris1[n1], baris2[n2], hasil[n1];

    for (int i = 0; i < n1; i++) {
        scanf("%d", &baris1[i]);
    }

    for (int i = 0; i < n2; i++) {
        scanf("%d", &baris2[i]);
    }

    // Menghitung hasil perkalian
    for (int i = 0; i < n1; i++) {
        hasil[i] = baris1[i] * baris2[i];
    }

    // mencetak hasil
    printf("\nOutput:\n");
    for (int i = 0; i < n1; i++) {
        printf("%d ", hasil[i]);
    }
    printf("\n");
}

int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    hitung(n1, n2);

    return 0;
}