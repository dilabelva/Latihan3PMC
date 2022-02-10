#include <stdio.h>
//Atadila Belva Ganya/18320015/Teknik Biomedis'20

struct mahasiswa{
    char nama[50];
    int nim;
    float kehadiran;
};

int main() {
    int jumlah;
    printf("Jumlah mahasiswa dalam satu kelas: ");
    scanf("%d", &jumlah);

    struct mahasiswa kls[100];

    int i;
    for (i=0;i<jumlah;i++){
        printf("\n---Mahasiswa %d---\n", i+1);
        printf("Nama: ");
        scanf("%s", kls[i].nama);
        printf("NIM: ");
        scanf("%d", &kls[i].nim);
        printf("Persentase Kehadiran: ");
        scanf("%f", &kls[i].kehadiran);
        printf("\n");
    }

    printf("\nMahasiswa dengan kehadiran <80%:\n");

    for (i=0;i<jumlah;i++){
        if (kls[i].kehadiran < 80){
            printf("%d. %s//%d//%.0f\n", i+1, kls[i].nama, kls[i].nim, kls[i].kehadiran);
        }
    }

    return(0);
}
