#include <stdio.h>

int main() {
    int a, b;
    // Read the interval [a, b]
    scanf("%d\n%d", &a, &b);

    // Array of strings for easy lookup of numbers 1-9
    char *numbers[] = {"one", "two", "three", "four", "five", 
                       "six", "seven", "eight", "nine"};

    for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 9) {
            // Print from the array (index is i-1)
            printf("%s\n", numbers[i - 1]);
        } 
        else if (i > 9) {
            // Check if even or odd using the modulo operator
            if (i % 2 == 0) {
                printf("even\n");
            } else {
                printf("odd\n");
            }
        }
    }

    return 0;
}
