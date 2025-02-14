#include <stdio.h>

int main() {
    FILE *fptr;

    fptr = fopen("Text.txt", "a");

    fputc('A', fptr);
    fputc('P', fptr);
    fputc('P', fptr);
    fputc('L', fptr);
    fputc('E', fptr);

    fclose(fptr);

    return 0;
}