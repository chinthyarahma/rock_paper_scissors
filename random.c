#include <stdio.h>

int main() {
    FILE *fptr;
    char buffer[100];

    fptr = fopen("hello.txt", "r");

    while (fgets(buffer, 100, fptr) != NULL) {
        printf("%s", buffer);
    }

    fclose(fptr);

    return 0;
}