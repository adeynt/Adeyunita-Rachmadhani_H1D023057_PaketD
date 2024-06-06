#include <stdio.h>
#include<stdlib.h>
//deklarasi struktur KHS

typedef struct khs *alamat;
struct khs
{
    int nim;
    float ip;
};

kartu;


//buat fungsi updat ip mahasiswa
void updateIP(float data, alamat *k){
    kartu->nim=57;
    kartu->ip=data;
}

void printKHS(alamat baru){
    printf("NIM: %x \n", &kartu->nim);
    printf("IP: %x", &kartu->ip);
}
//buat fungsi cetak KHS
main(){

    //cetak KHS sebelum perubahan
    printf("Sebelum IP diperbarui:\n");
    printKHS(&kartu);
    printf("\n");

    //ubah ip mahasiswa
    updateIP(4.00, &kartu);

    //cetak KHS sebelum perubahan
    printf("Setelah IP diperbarui:\n");
    printKHS(&kartu);

    return 0;
}