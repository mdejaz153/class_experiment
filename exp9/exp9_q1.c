#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50], text[200];

    printf("Enter file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Error! Could not create file.\n");
        return 1;
    }

    printf("Enter text to write: ");
    getchar(); 
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);

    fclose(fp);

    printf("File written successfully.\n");

    return 0;
}
