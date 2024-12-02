#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    
    int total = 0;
    for (int i = 1; i <= n; i++) {
        int line_sum = 0;
        for (int j = i; j >= 1; j--) {
            line_sum += j * k;
            printf("(%d * %d)", j, k);
            if (j != 1) printf(" + ");
        }
        printf(" = %d\n", line_sum);
        total += line_sum;
    }
    printf("%d\n", total);
    return 0;
}