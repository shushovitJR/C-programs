#include <stdio.h>
#include <string.h>

// Function to check if a given string is a multi-line comment
int isMultiLineComment(char *str) {
    int length = strlen(str);

    // Check if the string starts with "/*" and ends with "*/"
    if (length >= 4 && str[0] == '/' && str[1] == '*' && str[length - 2] == '*' && str[length - 1] == '/') {
        return 1; // It is a multi-line comment
    } else {
        return 0; // It is not a multi-line comment
    }
}

int main() {
    char input[1000];

    // Get user input
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    // Remove the newline character if present
    if (input[strlen(input) - 1] == '\n') {
        input[strlen(input) - 1] = '\0';
    }

    // Check if the input string is a multi-line comment
    if (isMultiLineComment(input)) {
        printf("The given string is a multi-line comment.\n");
    } else {
        printf("The given string is not a multi-line comment.\n");
    }

    return 0;
}

