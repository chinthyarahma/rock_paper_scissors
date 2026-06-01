#include <stdio.h>

int main() {
    FILE *fptr;

    fptr = fopen("hello.txt", "w");

    if (fptr == NULL) {
        printf("File gagal dibuka!");
        return 1;
    }

    fprintf(fptr, "21 Messi 99.5\n");

    fclose(fptr);

    printf("File berhasil dibuat!");

    return 0;
}