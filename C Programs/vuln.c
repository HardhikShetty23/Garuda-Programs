#include <stdio.h>
#include <stdlib.h>  // 🔥 Include this for system()

void secret() {
    printf("You've hacked this program!\n");
    system("/bin/sh");  // Spawns a shell
}

void vulnerable() {
    char buffer[64];
    printf("Enter your input: ");

    // 🚨 Dangerous function (used only for exploitation practice)
    gets(buffer);  
}

int main() {
    vulnerable();
    return 0;
}
