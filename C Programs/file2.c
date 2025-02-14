#include<stdio.h> 

int main() {
    FILE *fptr;

    fptr = fopen("Text.txt", "r");

    int ch;
    // fscanf(fptr, "%c", &ch);
    // printf("The character = %c\n", ch);
    // fscanf(fptr, "%c", &ch);
    // printf("The character = %c\n", ch);
    // fscanf(fptr, "%c", &ch);
    // printf("The character = %c\n", ch);
    // fscanf(fptr, "%c", &ch);
    // printf("The character = %c\n", ch);
    // fscanf(fptr, "%c", &ch);
    // printf("The character = %c\n", ch);

    fscanf(fptr, "%d", &ch);
    printf("The number = %d\n", ch);

    fclose(fptr);

    return 0;

}