#include <stdio.h>
int main(){
    int ruang;
    scanf("%d", &ruang);

    int zetsu[ruang];
    for (int i = 0; i < ruang; i ++){
        scanf("%d", &zetsu[i]);
    }

    printf("\nOutput:\n");
    for (int i = 0; i < ruang; i ++){
        zetsu[i] *= (i+1);
        printf("%d ", zetsu[i]);
    }

    return 0;
}