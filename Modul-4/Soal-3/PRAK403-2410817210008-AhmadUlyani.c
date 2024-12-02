#include <stdio.h>

void bilangan(int a, int b) {
    int start = a, end = b;

    if (a < b) { // Kasus a lebih kecil dari b
        while (start <= b && end >= a) {
            printf("%d %d", start, end);
            if (start < b && end > a) {
                printf(" - ");
            }
            start++;
            end--;
        }
    } else { // Kasus a lebih besar dari b
        while (start >= b && end <= a) {
            printf("%d %d", start, end);
            if (start > b && end < a) {
                printf(" - ");
            }
            start--;
            end++;
        }
    }
    printf("\n");
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    bilangan(a, b);
    return 0;
}