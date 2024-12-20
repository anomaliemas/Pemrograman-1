#include <stdio.h>

int main() {
    char nama[100];
    char NIM[100];
    char kelasparalel[100];
    char ttl[100];
    char Alamat[100];
    char Hobby[100];
    char No_hp[100];

    printf("Nama                    :");
    fgets(nama,sizeof(nama),stdin);
    printf("NIM                     :");
    fgets(NIM,sizeof(NIM),stdin);
    printf("Kelas Paralel           :");
    fgets(kelasparalel,sizeof(kelasparalel),stdin);
    printf("Tempat/Tanggal Lahir    :");
    fgets(ttl,sizeof(ttl),stdin);
    printf("Alamat                  :");
    fgets(Alamat,sizeof(Alamat),stdin);
    printf("Hobby                   :");
    fgets(Hobby,sizeof(Hobby),stdin);
    printf("No. HP                  :");
    fgets(No_hp,sizeof(No_hp),stdin);

    printf("Nama                    : %s", nama);
    printf("NIM                     : %s", NIM);
    printf("Kelas Paralel           : %s", kelasparalel);
    printf("Tempat/Tanggal Lahir    : %s", ttl);
    printf("Alamat                  : %s", Alamat);
    printf("Hobby                   : %s", Hobby);
    printf("No. HP                  : %s", No_hp);
    return 0;
}