#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    
    // Read the five-digit integer
    scanf("%d", &n);
    
    // Process each digit
    while (n > 0) {
        sum += n % 10; // Extract the last digit and add to sum
        n = n / 10;    // Remove the last digit
    }
    
    printf("%d\n", sum);
    
    return 0;
}
