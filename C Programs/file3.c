#include <stdio.h>

int main() {
    FILE *fptr;

    fptr = fopen("Text.txt", "w");

    char m = 'M';
    char a = 'A';
    char n = 'N';
    char g = 'G';
    char o = 'O';

    fprintf(fptr, "%c", m);
    fprintf(fptr, "%c", a);
    fprintf(fptr, "%c", n);
    fprintf(fptr, "%c", g);
    fprintf(fptr, "%c", o);

    fclose(fptr);

    return 0;

}