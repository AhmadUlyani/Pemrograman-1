#include <stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    if (x == 0){
        printf("Nol");
    }
    else if (x > 0 && x < 10){
        printf("Satuan");
    }
    else if (x > 10 && x < 20){
        printf("Belasan");
    }
    else if (x >= 10 && x < 100){
        printf("Puluhan");
    }
    else {
        printf("Anda menginput melebihi limit bilangan");
    }

    return 0;
}