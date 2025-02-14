#include <stdio.h> 

int main() {
    FILE *fptr;

    fptr = fopen("filename.txt", "w");

    char name[200];
    int age;
    float cgpa;

    printf("Enter Student name: ");
    scanf("%s", name);
    printf("Enter Student age: ");
    scanf("%d", &age);
    printf("Enter Student CGPA: ");
    scanf("%f", &cgpa);

    fprintf(fptr, "Student name: %s\n", name);
    fprintf(fptr, "Student age: %d\n", age);
    fprintf(fptr, "Student CGPA: %f\n", cgpa);

    fclose(fptr);

    return 0;
}