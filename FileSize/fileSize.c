#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    long size;

    file = fopen("sample.txt", "rb");
    
    if (file == NULL) {
        printf("File sample.txt does not exist.\n");
        return 1;
    }

    fseek(file, 0, SEEK_END); // Move the file pointer to the end of the file
    size = ftell(file);

    printf("File size: %ld bytes\n", size);

    // Go to the beginning of the file
    fseek(file, 0, SEEK_SET);

    fclose(file);
    return 0;
}
