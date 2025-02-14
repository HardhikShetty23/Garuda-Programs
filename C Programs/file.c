#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("NewText.txt", "w");

    if (fptr == NULL) {
        printf("File Doesn't Exist");
    }else {
        fclose(fptr);
    }
    

    printf("%p", fptr);

    return 0;
}