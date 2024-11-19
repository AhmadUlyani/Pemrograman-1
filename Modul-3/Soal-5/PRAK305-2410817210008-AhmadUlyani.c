#include <stdio.h>
int main (){
    int totaldetik, jam, menit, detik;
    scanf("%d", &totaldetik);
    jam = totaldetik / 3600;
    menit = (totaldetik % 3600) / 60;
    detik = totaldetik % 60;
    if (jam >= 24){
        int hari = jam / 24;
        jam = jam % 24;
        printf("%d hari %02d:%02d:%02d",hari, jam, menit, detik);
    }
    else {
        printf("%02d:%02d:%02d", jam, menit, detik);
    } 

    return 0;
}