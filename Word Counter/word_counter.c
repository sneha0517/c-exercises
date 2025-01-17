#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void count_file_content(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Unable to open file '%s'\n", filename);
        exit(1);
    }

    int characters = 0, words = 0, lines = 0;
    char ch, prev_char = '\0';

    while ((ch = fgetc(file)) != EOF) {
        characters++;

        if (ch == '\n') {
            lines++;
        }

        // Word detection: a word ends with a space, newline, or EOF after a non-whitespace character
        if (!isspace(ch) && (isspace(prev_char) || prev_char == '\0')) {
            words++;
        }

        prev_char = ch;
    }

    // Increment lines for the last line if the file doesn't end with a newline
    if (characters > 0 && prev_char != '\n') {
        lines++;
    }

    fclose(file);

    printf("File: %s\n", filename);
    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    count_file_content(argv[1]);

    return 0;
}
