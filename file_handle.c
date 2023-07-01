#include <stdio.h>

int main() {
    FILE *file;
    char data[100];

    // Read from a file
    file = fopen("input.txt", "r");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    printf("Contents of the file:\n");
    while (fgets(data, sizeof(data), file) != NULL) {
        printf("%s", data);
    }
    printf("\n");
    fclose(file);

    // Write to a file
    file = fopen("output.txt", "w");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    printf("Enter text to write to the file (press Ctrl+D to stop):\n");
    while (fgets(data, sizeof(data), stdin) != NULL) {
        fputs(data, file);
    }
    fclose(file);
    printf("Text written to the file successfully.\n");

    // Append to a file
    file = fopen("output.txt", "a");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    printf("Enter text to append to the file (press Ctrl+D to stop):\n");
    while (fgets(data, sizeof(data), stdin) != NULL) {
        fputs(data, file);
    }
    fclose(file);
    printf("Text appended to the file successfully.\n");

    return 0;
}
