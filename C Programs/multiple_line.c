#include <stdio.h>
#include <string.h>

int main() {
    char text[1000];
    printf("Enter a paragraph (press Enter twice to stop):\n");

    char temp[100]; // Temporary buffer
    text[0] = '\0'; // Initialize as empty

    while (1) {
        fgets(temp, sizeof(temp), stdin);
        if (temp[0] == '\n') break; // Stop if the user presses Enter twice
        strcat(text, temp); // Append line to text
    }

    printf("\nYou entered:\n%s", text);
    return 0;
}
