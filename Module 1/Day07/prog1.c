#include <stdio.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char sourceFileName[100], destinationFileName[100];
    char data[100];

    // Get the source file name from the user
    printf("Enter the source file name: ");
    scanf("%s", sourceFileName);

    // Open the source file in write mode
    sourceFile = fopen(sourceFileName, "w");
    if (sourceFile == NULL) {
        printf("Failed to create the source file.\n");
        return 1;
    }

    // Get data to write to the source file
    printf("Enter data to write to the source file (max 100 characters): ");
    scanf(" %[^\n]", data);

    // Write data to the source file
    fprintf(sourceFile, "%s", data);

    // Close the source file
    fclose(sourceFile);

    // Get the destination file name from the user
    printf("Enter the destination file name: ");
    scanf("%s", destinationFileName);

    // Open the source file in read mode
    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        printf("Failed to open the source file.\n");
        return 1;
    }

    // Open the destination file in write mode
    destinationFile = fopen(destinationFileName, "w");
    if (destinationFile == NULL) {
        printf("Failed to create the destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    // Copy the contents of the source file to the destination file
    while (fgets(data, sizeof(data), sourceFile) != NULL) {
        fprintf(destinationFile, "%s", data);
    }

    printf("File copied successfully.\n");

    // Close the files
    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}
