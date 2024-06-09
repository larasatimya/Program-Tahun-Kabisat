#include <stdio.h>

void TahunKabisat(){
    printf("\n--------------------------------------------------\n");
    printf("Saya baru saja mengeksekusi program tahun kabisat!\n");
    printf("--------------------------------------------------\n\n");
}
void checkTahunKabisat(int parameter) {
    int n;
    n=parameter;
    if (n%4==0){
        printf("%d adalah tahun kabisat",n);
    }else if(n%100==0){
        printf("%d adalah tahun kabisat",n);
    }else if(n%400==0){
        printf("%d adalah tahun kabisat",n);
    }else {
        printf("%d bukan tahun kabisat",n);
    }
}

int main(){
    int tahun;

    printf("PERTAMA: ");
    TahunKabisat();

    printf("KEDUA: ");
    printf("\nMasukkan suatu tahun: ");
    scanf("%d",&tahun);
    checkTahunKabisat(tahun);

    return 0;
}
