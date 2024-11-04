#include <stdio.h>

int main (){

    char nama[30], nim[25], kelas[10], ttl[30], alamat[100], hobby[30], nohp[20];
    printf("Nama                   : ");
    fgets(nama, sizeof(nama), stdin);
    printf("NIM                    : ");
    fgets(nim, sizeof(nim), stdin);
    printf("Kelas Paralel          : ");
    fgets(kelas, sizeof(kelas), stdin);
    printf("Tempat/Tanggal Lahir   : ");
    fgets(ttl, sizeof(ttl), stdin);
    printf("Alamat                 : ");
    fgets(alamat, sizeof(alamat), stdin);
    printf("Hobby                  : ");
    fgets(hobby, sizeof(hobby), stdin);
    printf("No. Hp                 : ");
    fgets(nohp, sizeof(nohp), stdin);
    
    printf("\n");
    printf("Output :\n");
    printf("Nama                   : %s", nama);
    printf("NIM                    : %s", nim);
    printf("Kelas Paralel          : %s", kelas);
    printf("Tempat/Tanggal Lahir   : %s", ttl);
    printf("Alamat                 : %s", alamat);
    printf("Hobby                  : %s", hobby);
    printf("No. Hp                 : %s", nohp);

    return 0;
}