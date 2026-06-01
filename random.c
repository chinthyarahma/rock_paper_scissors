#include <stdio.h>

int main() {
    FILE *fptr;

    fptr = fopen("hello.txt", "w");

    if (fptr == NULL) {
        printf("File gagal dibuka!");
        return 1;
    }

    fprintf(fptr, "Halo dunia!\n");
    fprintf(fptr, "Ini ditulis dari program C.");

    fclose(fptr);

    printf("File berhasil dibuat!");

    return 0;
}