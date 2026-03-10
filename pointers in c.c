#include <stdio.h>
#include <stdlib.h>

void update(int *a, int *b) {
    // Store the original values locally to ensure calculations are correct
    int valA = *a;
    int valB = *b;
    
    // Set *a to the sum
    *a = valA + valB;
    
    // Set *b to the absolute difference
    *b = abs(valA - valB);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    // Handling input
    if (scanf("%d %d", &a, &b) == 2) {
        update(pa, pb);
        printf("%d\n%d", a, b);
    }
    
    return 0;
}
