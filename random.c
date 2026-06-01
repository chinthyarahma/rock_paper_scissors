#include <stdio.h>

int main() {
    FILE *fptr;
    char c;

    fptr = fopen("hello.txt", "r");

    while ((c = fgetc(fptr)) != EOF) {
        printf("%c\n", c);
    }

    fclose(fptr);

    return 0;
}