#include <stdio.h>

int _strlen_recursion(char *s) {
    // Base case: end of string
    if (*s == '\0') {
        return 0;
    }
    
    // Recursive case: increment length and move to next character
    return 1 + _strlen_recursion(s + 1);
}

int main() {
    char str[] = "Hello, World!";
    int length = _strlen_recursion(str);
    printf("Length of the string: %d\n", length);
    return 0;
}

