#include <stdio.h>

int main() {
    FILE *fptr;

    int umur;
    char nama[20];
    float nilai;

    fptr = fopen("hello.txt", "r");

    fscanf(fptr, "%d %s %f", &umur, nama, &nilai);

    printf("Umur: %d\n", umur);
    printf("Nama: %s\n", nama);
    printf("Nilai: %.1f\n", nilai);

    fclose(fptr);

    return 0;
}