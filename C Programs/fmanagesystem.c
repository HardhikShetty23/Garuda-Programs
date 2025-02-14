#include <stdio.h>
#include <string.h>

void createfile(char filename[100]);
void writefile(char filename[100]);
void getparagraph(char buffer[1000]);
//void getparagraph2(char buffer[1000]);

int main() {
    char filename[100];
    char text[1000]; 
    getparagraph(text);
    //printf("The text is: \n%s", text);

    return 0;
}

void createfile(char filename[100]) {

    printf("Enter the filename (with Extention): ");
    scanf("%99s", filename);

    FILE *fptr;
    fptr = fopen(filename, "w");
    printf("File Created Successfully!\n");

    fclose(fptr);
}

void writefile(char filename[100]) {
    char text[1000];
    printf("Enter text to write: ");
    scanf("%s", text);

    FILE *fptr;
    fptr = fopen(filename, "w");

    fprintf(fptr, "%s", text);

    fclose(fptr);
}

void getparagraph(char buffer[1000]) {

    printf("Enter the paragraph (Press ENTER twice to stop): ");

    char temp[100];
    temp[0] = '\0';

    while (1) {
        fgets(temp, sizeof(temp), stdin);
        if (temp[0] == '\n') {
            break;
        }
        strcat(buffer, temp);
    }

    printf("Your entered paragraph: \n%s", buffer);
}

char getparagraph2(char buffer[1000]) {
    
    printf("Enter the paragraph (Press ENTER twice to stop):\n");

    char temp[100];
    buffer[0] = '\0';  // ✅ Initialize buffer to an empty string
    int first_input = 1; // ✅ To handle the first input properly

    while (1) {
        fgets(temp, sizeof(temp), stdin);
        if (temp[0] == '\n') break; // ✅ Stop if user presses Enter twice

        if (first_input) {
            strcpy(buffer, temp);  // ✅ Directly copy first input to buffer
            first_input = 0;
        } else {
            strcat(buffer, temp);  // ✅ Append remaining inputs
        }
    }
}

