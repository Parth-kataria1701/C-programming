//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
#include <stdio.h>

int main() {
    FILE *source, *destination;
    char sourceFile[100], destinationFile[100];
    int ch;

    scanf("%99s", sourceFile);
    scanf("%99s", destinationFile);

    source = fopen(sourceFile, "r");

    if (source == NULL) {
        printf("Unable to open source file");
        return 1;
    }

    destination = fopen(destinationFile, "w");

    if (destination == NULL) {
        printf("Unable to open destination file");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    printf("File copied successfully to %s", destinationFile);

    fclose(source);
    fclose(destination);

    return 0;
}
