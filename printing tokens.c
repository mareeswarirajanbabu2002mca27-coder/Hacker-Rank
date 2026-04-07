#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *s;
    s = malloc(1024 * sizeof(char));
    
    // Read the input sentence until a newline is encountered
    scanf("%[^\n]", s);
    
    // Loop through the string and print characters
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == ' ') {
            printf("\n");
        } else {
            printf("%c", s[i]);
        }
    }
    
    free(s);
    return 0;
}
