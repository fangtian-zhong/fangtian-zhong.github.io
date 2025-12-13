#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "r");
    char buffer[256];

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), file)) {
        printf("%s", buffer);  // Print each line read from the file
    }

    fclose(file);
    return 0;
}

