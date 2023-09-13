#include <stdio.h>
#include <stdlib.h>

#define INITIAL_BUFFER_SIZE 128

char *getline_custom() {
    char *line = NULL;
    size_t buffer_size = INITIAL_BUFFER_SIZE;
    size_t line_length = 0;
    int c;

    line = (char *)malloc(buffer_size * sizeof(char));
    if (!line) {
        perror("Memory allocation error");
        exit(EXIT_FAILURE);
    }

    while (1) {
        c = getchar();

        if (c == EOF || c == '\n') {
            line[line_length] = '\0';
            break;
        } else {
            line[line_length] = (char)c;
        }

        line_length++;

        if (line_length >= buffer_size) {
            buffer_size *= 2;
            line = (char *)realloc(line, buffer_size * sizeof(char));
            if (!line) {
                perror("Memory reallocation error");
                exit(EXIT_FAILURE);
            }
        }
    }

    return line;
}

int main() {
    printf("Enter a line of text: ");
    char *input_line = getline_custom();
    printf("You entered: %s\n", input_line);
    free(input_line);
    return 0;
}

