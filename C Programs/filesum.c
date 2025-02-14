#include <stdio.h>

int main() {
    FILE *fptr;

    fptr = fopen("Sum.txt", "r");

    int a, b, sum;
    fscanf(fptr, "%d", &a);
    fscanf(fptr, "%d", &b);
    sum = a + b;

    fclose(fptr);

    fptr = fopen("Sum.txt", "a");

    fprintf(fptr, "%d\n", sum);


    fclose(fptr);

    return 0;
}