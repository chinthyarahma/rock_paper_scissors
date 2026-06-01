#include <stdio.h>

int main() {
    FILE *fptr;
    char buffer[100];

    fptr = fopen("hello.txt", "r");

    fgets(buffer, 100, fptr);

    printf("%s", buffer);

    fgets(buffer, 100, fptr);

    printf("%s", buffer);

    fclose(fptr);

    return 0;
}